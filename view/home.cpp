#include "home.h"
#include "ui_home.h"

home::home(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::home)
    , uiRp(new registerproduct)
    , newU(new new_user)
    , uiconsultar(new consultar)
    , s(new graficlientes)
    , e(new grafi_empleados)
    ,uiProv(new addProvedores)

{
    ui->setupUi(this);
}

home::~home()
{
    delete ui;
    delete uiRp;
}

void home::on_btn_registrar_clicked()
{
    uiRp->show();
}


void home::on_btn_usuarios_clicked()
{
    newU->show();
}


void home::on_btn_consultar_clicked()
{
    uiconsultar->show();
}



void home::on_pbtn_empleado_clicked()
{
    e->show();
}




void home::on_btn_clientes_clicked()
{
    s->show();
}


void home::on_btn_aggProvedores_clicked()
{
    uiProv->show();
}


void home::on_btn_registrarEmpleado_clicked()
{
    e->show();
}

