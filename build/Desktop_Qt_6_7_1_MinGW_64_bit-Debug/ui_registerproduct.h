/********************************************************************************
** Form generated from reading UI file 'registerproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPRODUCT_H
#define UI_REGISTERPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerproduct
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbtn_previous;
    QPushButton *pbtn_next;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_producto;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_unidades;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_precio;
    QPushButton *pbtn_add;
    QPushButton *pbtn_nuevo;

    void setupUi(QWidget *registerproduct)
    {
        if (registerproduct->objectName().isEmpty())
            registerproduct->setObjectName("registerproduct");
        registerproduct->resize(238, 246);
        layoutWidget = new QWidget(registerproduct);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 200, 234));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic")});
        font.setPointSize(11);
        layoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pbtn_previous = new QPushButton(layoutWidget);
        pbtn_previous->setObjectName("pbtn_previous");
        pbtn_previous->setFont(font);

        horizontalLayout_4->addWidget(pbtn_previous);

        pbtn_next = new QPushButton(layoutWidget);
        pbtn_next->setObjectName("pbtn_next");
        pbtn_next->setFont(font);

        horizontalLayout_4->addWidget(pbtn_next);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Yu Gothic")});
        font1.setPointSize(11);
        font1.setBold(true);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        txt_producto = new QLineEdit(layoutWidget);
        txt_producto->setObjectName("txt_producto");
        txt_producto->setFont(font);

        horizontalLayout->addWidget(txt_producto);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        txt_unidades = new QLineEdit(layoutWidget);
        txt_unidades->setObjectName("txt_unidades");
        txt_unidades->setFont(font);

        horizontalLayout_2->addWidget(txt_unidades);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        txt_precio = new QLineEdit(layoutWidget);
        txt_precio->setObjectName("txt_precio");
        txt_precio->setFont(font);

        horizontalLayout_3->addWidget(txt_precio);


        verticalLayout->addLayout(horizontalLayout_3);

        pbtn_add = new QPushButton(layoutWidget);
        pbtn_add->setObjectName("pbtn_add");
        pbtn_add->setFont(font);

        verticalLayout->addWidget(pbtn_add);

        pbtn_nuevo = new QPushButton(layoutWidget);
        pbtn_nuevo->setObjectName("pbtn_nuevo");
        pbtn_nuevo->setFont(font);

        verticalLayout->addWidget(pbtn_nuevo);


        retranslateUi(registerproduct);

        QMetaObject::connectSlotsByName(registerproduct);
    } // setupUi

    void retranslateUi(QWidget *registerproduct)
    {
        registerproduct->setWindowTitle(QCoreApplication::translate("registerproduct", "Registro de Productos", nullptr));
        pbtn_previous->setText(QCoreApplication::translate("registerproduct", "<<", nullptr));
        pbtn_next->setText(QCoreApplication::translate("registerproduct", ">>", nullptr));
        label->setText(QCoreApplication::translate("registerproduct", "Producto", nullptr));
        label_2->setText(QCoreApplication::translate("registerproduct", "Unidades", nullptr));
        label_3->setText(QCoreApplication::translate("registerproduct", "Precio", nullptr));
        pbtn_add->setText(QCoreApplication::translate("registerproduct", "ADD", nullptr));
        pbtn_nuevo->setText(QCoreApplication::translate("registerproduct", "Nuevo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerproduct: public Ui_registerproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPRODUCT_H
