#ifndef USERDAO_H
#define USERDAO_H
#include "headers/user.h"
#include <vector>
#include <fstream>
class userDAO{
    user usuario;
    fstream archivo;
public:
    userDAO(const user&);
    userDAO();
    //leer todos los registros del archivp u añmacenarlos en el vector
    vector<string> loadUsers();
    bool guardar(string, string);
};


#endif // USERDAO_H
