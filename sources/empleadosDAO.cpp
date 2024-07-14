
#include "headers/empleadosDAO.h"
empleados_DAO::empleados_DAO()
{

}

empleados_DAO::~empleados_DAO()
{

}

empleados_DAO::empleados_DAO(const empleados &p_)
{
    this->p=p_;
}

void empleados_DAO::writeProducts()
{
    archivo.open(path,ios::app);
    if(archivo.is_open()){
        archivo<<p.informacion()<<endl;
        archivo.close();
    }
}

std::vector<empleados> empleados_DAO::readProducts()
{
    vector<empleados> products;
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
        empleados p(tokens[0],tokens[1],tokens[2],tokens[3],tokens[4]);
        products.push_back(p);
    }
    return products;
}

std::vector<std::string> empleados_DAO::split(char delimitador, string str)
{
    vector<string> tokens;
    stringstream ss(str);
    string item;
    while(getline(ss,item,delimitador)){
        tokens.push_back(item);
    }
    return tokens;
}
