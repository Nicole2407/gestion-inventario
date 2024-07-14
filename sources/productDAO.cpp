#include "../headers/productDAO.h"
#include "qdebug.h"
#include "qlogging.h"
#include <string>
#include <sstream>

vector<string>split(string str, char delimitador){
    vector<string>tokens;
    stringstream ss(str);
    string item;

    while(getline(ss, item, delimitador)){
        tokens.push_back(item);
    }
    return tokens;
}
productDAO::productDAO(){}
productDAO::~productDAO(){}
productDAO::productDAO(const  product& _p){
    this->p=_p;

}

void productDAO::writeProducts(){
    archivo.open(path, ios::app);
    if(archivo.is_open()){
        archivo<<p.information(); // salto de linea poner aqui si no vale
        archivo.close();
    }
}
const vector<product> productDAO::readProducts(){

    vector <product> productos;
    vector<string>dataFile; //recupera el contenido del archivo
    archivo.open(path, ios::in);
    if(archivo.is_open()){
        string linea="";
        while(getline(archivo, linea)){
            dataFile.push_back(linea);
        }
        archivo.close();
    }else{
        qDebug()<<"ERROR";}
    for(auto & str:dataFile){
        vector <string>tokens=split(str,';'); //separa por ;
        product p;
        if(tokens.size()<3) {
            continue;
        }
        try{
            p.setName(tokens[0]);
            p.setStock(stoi(tokens[1])); // Convertir a int una cadena de caracteres
            p.setPrice(stod(tokens[2])); // Precio del producto
            productos.push_back(p);
        }catch(const exception &e) {
            qDebug()<<"Error";
        }
    }

    return productos;
}
bool productDAO::saveProductos(string p, int c){
  vector<product>pro=readProducts();
    archivo.open(path, ios::out);
    if(archivo.is_open()){
        archivo.clear();
        for(const auto& product : pro) {
            if(product.getName()==p){
                archivo<<p<<";"<<c<<";"<<product.getPrice()<<"\n";
            }else archivo<<product.getName()<<";"<<product.getStock()<<";"<<product.getPrice()<<"\n";
        }
        archivo.close();
        return true;
    }
    return false;
}

