/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QPushButton *btn_login;
    QLineEdit *txt_usuario;
    QLineEdit *txt_usuario_2;
    QRadioButton *rbt_empleado;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(419, 133);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 401, 111));
        QFont font;
        font.setPointSize(10);
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Yu Gothic")});
        font1.setPointSize(10);
        font1.setBold(false);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::RightToLeft);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btn_login = new QPushButton(layoutWidget);
        btn_login->setObjectName("btn_login");
        btn_login->setFont(font);

        gridLayout->addWidget(btn_login, 3, 1, 1, 1);

        txt_usuario = new QLineEdit(layoutWidget);
        txt_usuario->setObjectName("txt_usuario");
        txt_usuario->setFont(font);

        gridLayout->addWidget(txt_usuario, 0, 1, 1, 1);

        txt_usuario_2 = new QLineEdit(layoutWidget);
        txt_usuario_2->setObjectName("txt_usuario_2");
        txt_usuario_2->setFont(font);
        txt_usuario_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(txt_usuario_2, 1, 1, 1, 1);

        rbt_empleado = new QRadioButton(layoutWidget);
        rbt_empleado->setObjectName("rbt_empleado");
        rbt_empleado->setFont(font);

        gridLayout->addWidget(rbt_empleado, 2, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Inicio de Sesion", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Clave/Dni:", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Usuario/Nombre:", nullptr));
        btn_login->setText(QCoreApplication::translate("Widget", "LOGIN", nullptr));
        rbt_empleado->setText(QCoreApplication::translate("Widget", "Iniciar sesion como empleado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
