#ifndef NEW_USER_H
#define NEW_USER_H

#include "headers/logic_user.h"
#include <QWidget>

namespace Ui {
class new_user;
}

class new_user : public QWidget
{
    Q_OBJECT

public:
    explicit new_user(QWidget *parent = nullptr);
    ~new_user();
    logic_user l;

private slots:
    void on_pushButton_clicked();

private:
    Ui::new_user *ui;
};

#endif // NEW_USER_H
