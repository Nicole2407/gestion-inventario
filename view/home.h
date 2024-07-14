#ifndef HOME_H
#define HOME_H

#include "view/addprovedores.h"
#include "view/consultar.h"
#include "view/grafi_empleados.h"
#include "view/new_user.h"
#include "view/registerproduct.h"
#include "view/graficlientes.h"
#include "view/registrarventas.h"
#include <QWidget>

namespace Ui {
class home;
}

class home : public QWidget
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private slots:
    void on_btn_registrar_clicked();

    void on_btn_usuarios_clicked();

    void on_btn_consultar_clicked();

    void on_pbtn_empleado_clicked();

    void on_btn_clientes_clicked();

    void on_btn_aggProvedores_clicked();

    void on_btn_registrarEmpleado_clicked();

private:
    Ui::home *ui;
    registerproduct *uiRp ;
    new_user *newU;
    consultar *uiconsultar;
    graficlientes *s;
    grafi_empleados *e;
    addProvedores *uiProv;

};

#endif // HOME_H
