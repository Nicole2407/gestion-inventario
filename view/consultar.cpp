#include "consultar.h"
#include "ui_consultar.h"
#include <QTableWidget>
consultar::consultar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::consultar)
{
    ui->setupUi(this);

}

consultar::~consultar()
{
    delete ui;
}

void consultar::on_pbtn_msotrar_clicked()
{
       ui->twdg->setRowCount(lp.tamanio());
        vector<string> h;
        for(int i=0;i<lp.tamanio();i++){
            h=lp.loadInfoProduct(i);
            double j=0;
            j=stod(h[1])*stod(h[2]);
            ui->twdg->setItem(i,0,new QTableWidgetItem(QString::fromStdString(h[0])));
            ui->twdg->setItem(i,1,new QTableWidgetItem(QString::fromStdString(h[1])));
            ui->twdg->setItem(i,2,new QTableWidgetItem(QString::fromStdString(h[2])));
            ui->twdg->setItem(i,3,new QTableWidgetItem(QString::number(j)));
        }

}

