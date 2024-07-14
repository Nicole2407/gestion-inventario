#ifndef CONSULTAR_H
#define CONSULTAR_H

#include "headers/logic_product.h"
#include <QWidget>

namespace Ui {
class consultar;
}

class consultar : public QWidget
{
    Q_OBJECT

public:
    explicit consultar(QWidget *parent = nullptr);
    ~consultar();

private slots:
    void on_pbtn_msotrar_clicked();

private:
    Ui::consultar *ui;
    logic_product lp;


};

#endif // CONSULTAR_H
