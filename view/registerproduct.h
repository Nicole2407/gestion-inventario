#ifndef REGISTERPRODUCT_H
#define REGISTERPRODUCT_H

#include "headers/logic_product.h"
#include <QWidget>

namespace Ui {
class registerproduct;
}

class registerproduct : public QWidget
{
    Q_OBJECT

public:
    explicit registerproduct(QWidget *parent = nullptr);
    ~registerproduct();

private:
    Ui::registerproduct *ui;
    logic_product lp,
        *ptrLp=nullptr;
    void clearfields();
    void loadfields(int index);
    int index;
private slots:

    void on_pbtn_add_clicked();
    void on_pbtn_previous_clicked();
    void on_pbtn_next_clicked();
    void on_pbtn_nuevo_clicked();
};

#endif // REGISTERPRODUCT_H
