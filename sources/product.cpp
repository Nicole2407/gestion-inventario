#include "../headers/product.h"
product::product(){}
product::~product(){}

product::product(string n, int s, double p){
    name=n;
    stock=s;
    price=p;
}
string product::getName()const{
    return name;
}
int product::getStock()const{
    return stock;
}
double product::getPrice()const{
    return price;
}
void product::setName(string _name){
    name=_name;
}
void product::setStock(int _stock){
    stock=_stock;
}
void product::setPrice(double _price){
    price=_price;
}
string product::information()const{
    return name+";"+to_string(stock)+";"+to_string(price)+"\n";
}
