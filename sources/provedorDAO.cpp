#include <headers/provedorDAO.h>
#include <QDebug>
provedorDAO::provedorDAO(){}

provedorDAO::~provedorDAO(){}


provedorDAO::provedorDAO(const  provedores& _p){
    this->prov=_p;
}
void provedorDAO::writeProducts(){
    archivo.open(path, ios::app);
    if(archivo.is_open()){
        archivo<<prov.informacionProvedores();
        // qDebug()<<prov.informacionProvedores(); // salto de linea poner aqui si no vale
        archivo.close();
    }
}
