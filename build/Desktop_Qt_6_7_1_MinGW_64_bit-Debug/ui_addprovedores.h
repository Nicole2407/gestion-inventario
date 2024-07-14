/********************************************************************************
** Form generated from reading UI file 'addprovedores.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROVEDORES_H
#define UI_ADDPROVEDORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addProvedores
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txt_nombre;
    QLabel *label_2;
    QLineEdit *txt_telf;
    QLabel *label_3;
    QLineEdit *txt_email;
    QLabel *label_4;
    QLineEdit *txt_razonSocial;
    QPushButton *btn_agregar;

    void setupUi(QWidget *addProvedores)
    {
        if (addProvedores->objectName().isEmpty())
            addProvedores->setObjectName("addProvedores");
        addProvedores->resize(282, 213);
        layoutWidget = new QWidget(addProvedores);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 245, 183));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic")});
        font.setPointSize(11);
        font.setBold(true);
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txt_nombre = new QLineEdit(layoutWidget);
        txt_nombre->setObjectName("txt_nombre");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Yu Gothic")});
        font1.setPointSize(11);
        font1.setBold(false);
        txt_nombre->setFont(font1);

        gridLayout->addWidget(txt_nombre, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txt_telf = new QLineEdit(layoutWidget);
        txt_telf->setObjectName("txt_telf");
        txt_telf->setFont(font1);

        gridLayout->addWidget(txt_telf, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txt_email = new QLineEdit(layoutWidget);
        txt_email->setObjectName("txt_email");
        txt_email->setFont(font1);

        gridLayout->addWidget(txt_email, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        txt_razonSocial = new QLineEdit(layoutWidget);
        txt_razonSocial->setObjectName("txt_razonSocial");
        txt_razonSocial->setFont(font1);

        gridLayout->addWidget(txt_razonSocial, 3, 1, 1, 1);

        btn_agregar = new QPushButton(layoutWidget);
        btn_agregar->setObjectName("btn_agregar");
        btn_agregar->setFont(font1);

        gridLayout->addWidget(btn_agregar, 4, 0, 1, 2);


        retranslateUi(addProvedores);

        QMetaObject::connectSlotsByName(addProvedores);
    } // setupUi

    void retranslateUi(QWidget *addProvedores)
    {
        addProvedores->setWindowTitle(QCoreApplication::translate("addProvedores", "Provedores", nullptr));
        label->setText(QCoreApplication::translate("addProvedores", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("addProvedores", "Telefono:", nullptr));
        label_3->setText(QCoreApplication::translate("addProvedores", "Email:", nullptr));
        txt_email->setText(QString());
        label_4->setText(QCoreApplication::translate("addProvedores", "Razon Social", nullptr));
        txt_razonSocial->setText(QString());
        btn_agregar->setText(QCoreApplication::translate("addProvedores", "AGREGAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addProvedores: public Ui_addProvedores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROVEDORES_H
