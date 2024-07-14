#include "registrarventas.h"
#include "ui_registrarventas.h"
#include <QMessageBox>
using namespace std;

registrarVentas::registrarVentas(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registrarVentas)
{
    ui->setupUi(this);
}

registrarVentas::~registrarVentas()
{
    delete ui;
}

void registrarVentas::on_btn_pagar_clicked(){
    QMessageBox::information(this, "Pago","Pago Realizado Correctamente");
    ui->lbl_correo->clear();
    ui->lbl_direccion->clear();
    ui->lbl_telefono->clear();
    ui->lbl_correo->clear();
    ui->lbl_subtotal->clear();
    ui->lbl_iva->clear();
    ui->lbl_total->clear();
    ui->tableWidget_ventas->setRowCount(0);
    ui->txt_cedula->clear();
    subtotal=0.0;
    total=0.0;
    iva=0.0;
    ui->spinBox_cantidad->clear();
    close();
}


void registrarVentas::on_btn_anadir_clicked()
{

   QString producto=ui->cb_productos->currentText();
    QString cantidad=QString::number(ui->spinBox_cantidad->value());

    double precio=0.0;
    int stock=0;
    for(auto i:lProd.getProductos()){
        if(producto==QString::fromStdString(i.getName())){
            stock=i.getStock()-cantidad.toInt();//i.setStock(i.getStock()-cantidad.toInt());
            if(cantidad.toInt()>i.getStock()){
                QString stock=QString::number(i.getStock());
                QMessageBox::information(this, "ERROR","El maximo de productos que se dispone es: "+stock);
                return;
            }else{
                if(p.saveProductos(producto.toStdString(),stock))QMessageBox::information(this,"Registro Ventas","Producto Añadidido Correctamente");
                else QMessageBox::information(this,"Error","No se pudo añadir el producto");
            }
            precio=i.getPrice();
        }
    }

    double total=precio*cantidad.toInt();
    const int row =ui->tableWidget_ventas->rowCount();


    ui->tableWidget_ventas->insertRow(row);
    ui->tableWidget_ventas->setItem(row,0, new QTableWidgetItem(producto));
    ui->tableWidget_ventas->setItem(row,1, new QTableWidgetItem(cantidad));
    ui->tableWidget_ventas->setItem(row,2, new QTableWidgetItem(QString::number(precio)));
    ui->tableWidget_ventas->setItem(row,3, new QTableWidgetItem(QString::number(total)));


    subtotal+=total;
    ui->lbl_subtotal->setText(QString::number(subtotal));
    iva=subtotal*0.15;
    total=iva+subtotal;
    ui->lbl_total->setText(QString::number(total));
    ui->lbl_iva->setText(QString::number(iva));
}

void registrarVentas::on_btn_buscar_clicked()
{
   string cedula=ui->txt_cedula->text().toStdString();
    bool band=false;
    for(auto i:c.readProducts()){
        if(i.getdni()==cedula){
            ui->lbl_correo->setText(QString::fromStdString(i.getcorreo()));
            ui->lbl_nombre->setText(QString::fromStdString(i.getname()));
            ui->lbl_direccion->setText(QString::fromStdString(i.getdirecc()));
            ui->lbl_telefono->setText(QString::fromStdString(i.gettelefono()));
            band=true;}
    }
    if(!band){
        QMessageBox::information(this, "Error", "No se encontro un cliente con esa cedula");
    }
    ui->tableWidget_ventas->setHorizontalHeaderLabels({"Producto","Canrtidad","Precio","Total"});
    load();
}

void registrarVentas::load(){
    for(const auto &i:p.readProducts()){
        ui->cb_productos->addItem(QString::fromStdString(i.getName()));}
    for(auto i:lEmp.getEmployees()){
        ui->cb_empleados->addItem(QString::fromStdString(i.getnombre()));
    }
}
