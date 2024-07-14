#include "headers/clienteDAO.h"
#include "qdebug.h"
#include "qlogging.h"
#include <sstream>
clienteDAO::clienteDAO()
{

}

void clienteDAO::writeProducts()
{
    archivo.open(path,ios::app);
    if(archivo.is_open()){
        archivo<<p.informacion()<<endl;
        archivo.close();
    }
}

vector<cabcliente> clienteDAO::readProducts()
{
    vector<cabcliente> products;
    vector<string>datafile;
    archivo.open(path,ios::in);
    if(archivo.is_open()){
        string linea;
        while(getline(archivo,linea)){
            datafile.push_back(linea);
        }
        archivo.close();
    }
    for( string &str:datafile){
        vector<string>tokens=split(';',str);
        cabcliente p(tokens[0],tokens[1],tokens[2],tokens[3],tokens[4]);
        products.push_back(p);
    }
    return products;

}

vector<string> clienteDAO::split(char delimitador, string str)
{
    vector<string> tokens;
    stringstream ss(str);
    string item;
    while(getline(ss,item,delimitador)){
        tokens.push_back(item);
    }
    return tokens;
}

clienteDAO::~clienteDAO()
{

}

clienteDAO::clienteDAO(const cabcliente &p_)
{
    this->p=p_;

}
