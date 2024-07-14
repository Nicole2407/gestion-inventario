#include "registerproduct.h"
#include "qmessagebox.h"
#include "ui_registerproduct.h"
using namespace std;
registerproduct::registerproduct(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerproduct)
{
    ui->setupUi(this);
    ptrLp=&lp;
    ui->pbtn_add->setEnabled(false);

}

registerproduct::~registerproduct()
{
    delete ui;
}

void registerproduct::clearfields()
{
    ui->txt_producto->clear();
    ui->txt_precio->clear();
    ui->txt_unidades->clear();
}

void registerproduct::loadfields(int index)
{
    ui->pbtn_add->setEnabled(false);
    vector<string> p=ptrLp->loadInfoProduct(index);
    if(p.size()>0){
        ui->txt_producto->setText(QString::fromStdString(p[0]));
        ui->txt_precio->setText(QString::fromStdString(p[2]));
        ui->txt_unidades->setText(QString::fromStdString(p[1]));
    }else{
        QMessageBox::information(this,"Registro de productos","No existen mas productos");
    }
}

void registerproduct::on_pbtn_add_clicked()
{
    string name=ui->txt_producto->text().toStdString();
    int stock=ui->txt_unidades->text().toInt();
    double price= ui->txt_precio->text().toDouble();
    if(ptrLp->save(name,stock,price)){
        QMessageBox::information(this,"Registro de producto","Registro exitoso");
        clearfields();
        close();
    }
}


void registerproduct::on_pbtn_previous_clicked()
{
    index--;
    loadfields(index);
}


void registerproduct::on_pbtn_next_clicked()
{
    index++;
    loadfields(index);
}


void registerproduct::on_pbtn_nuevo_clicked()
{
    clearfields();
    ui->pbtn_add->setEnabled(true);
}

