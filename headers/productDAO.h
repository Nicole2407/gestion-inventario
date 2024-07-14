#ifndef PRODUCTDAO_H
#define PRODUCTDAO_H
#include <fstream>
#include <vector>
#include "headers/product.h"
using namespace std;
class productDAO{
    product p;
    fstream archivo;
    string path="C://ejerciciosFS//ejercicio1//producto.txt";
public:

    productDAO();
    ~productDAO();

    productDAO(const  product&);
    void writeProducts();

    const vector<product> readProducts();

    bool saveProductos(string, int);
};
#endif // PRODUCTDAO_H
