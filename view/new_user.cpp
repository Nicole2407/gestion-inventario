#include "new_user.h"
#include "ui_new_user.h"
#include <QMessageBox>
new_user::new_user(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::new_user)
{
    ui->setupUi(this);


}

new_user::~new_user()
{
    delete ui;
}

void new_user::on_pushButton_clicked()
{


    if((ui->txt_email->text()!="")&&(ui->txt_psw->text()==ui->txt_confirm->text())&&(ui->txt_psw->text()!="")){
        l.agregar(ui->txt_email->text().toStdString(),ui->txt_psw->text().toStdString(),ui->txt_confirm->text().toStdString());
        QMessageBox::information(this,"Registro","Registro Exitoso");
        ui->txt_email->setText("");
        ui->txt_confirm->setText("");
        ui->txt_psw->setText("");
        close();
    }else{
        QMessageBox::critical(this,"Registro","Campos vacios o registro Incorrecto");

    }
}

