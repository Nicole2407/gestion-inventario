#ifndef REGISTRARVENTAS_H
#define REGISTRARVENTAS_H

#include "headers/clienteDAO.h"
#include "headers/logic_empleados.h"
#include "headers/logic_product.h"
#include "headers/productDAO.h"
#include <QWidget>

namespace Ui {
class registrarVentas;
}

class registrarVentas : public QWidget
{
    Q_OBJECT

public:
    explicit registrarVentas(QWidget *parent = nullptr);
    ~registrarVentas();
     void load();

private:
    Ui::registrarVentas *ui;
    clienteDAO c;
    logic_product lProd;
    productDAO p;
    logic_empleados lEmp;
    double subtotal=0.0;
    double iva=0.0;
    double total=0.0;


private slots:

    void on_btn_anadir_clicked();
    void on_btn_pagar_clicked();
    void on_btn_buscar_clicked();
};

#endif // REGISTRARVENTAS_H
