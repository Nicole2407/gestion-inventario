#ifndef LOGIC_CLIENTE_H
#define LOGIC_CLIENTE_H
#include "headers/clienteDAO.h"
class logic_cliente{
private:
    clienteDAO pdao;

public:
    logic_cliente();
    ~logic_cliente();
    bool save(string,string,string,string,string);
    vector<string> loadInfoProduct(int);
    int tamanio();

};

#endif // Error in "
