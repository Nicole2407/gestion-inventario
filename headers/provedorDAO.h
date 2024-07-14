#ifndef PROVEDORDAO_H
#define PROVEDORDAO_H
#include <fstream>
#include <filesystem>
#include "headers/provedores.h"
class provedorDAO{
    provedores prov;
    fstream archivo;
    string path="C://ejerciciosFS//ejercicio1//provedores.txt";

public:
    provedorDAO();
    ~provedorDAO();

    provedorDAO(const  provedores&);
    void writeProducts();

};
#endif // PROVEDORDAO_H
