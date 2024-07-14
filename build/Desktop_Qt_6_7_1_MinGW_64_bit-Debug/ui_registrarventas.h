/********************************************************************************
** Form generated from reading UI file 'registrarventas.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARVENTAS_H
#define UI_REGISTRARVENTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registrarVentas
{
public:
    QTableWidget *tableWidget_ventas;
    QComboBox *cb_empleados;
    QLabel *label_3;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLineEdit *txt_cedula;
    QPushButton *btn_buscar;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *lbl_subtotal;
    QLabel *label_10;
    QLabel *lbl_iva;
    QLabel *label_11;
    QLabel *lbl_total;
    QPushButton *btn_pagar;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *lbl_nombre;
    QLabel *lbl_direccion;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *lbl_telefono;
    QLabel *lbl_correo;
    QLabel *label_5;
    QComboBox *cb_productos;
    QLabel *label_6;
    QSpinBox *spinBox_cantidad;
    QPushButton *btn_anadir;

    void setupUi(QWidget *registrarVentas)
    {
        if (registrarVentas->objectName().isEmpty())
            registrarVentas->setObjectName("registrarVentas");
        registrarVentas->resize(602, 584);
        tableWidget_ventas = new QTableWidget(registrarVentas);
        if (tableWidget_ventas->columnCount() < 4)
            tableWidget_ventas->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_ventas->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_ventas->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_ventas->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_ventas->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_ventas->setObjectName("tableWidget_ventas");
        tableWidget_ventas->setGeometry(QRect(30, 230, 531, 192));
        QFont font;
        font.setPointSize(10);
        tableWidget_ventas->setFont(font);
        cb_empleados = new QComboBox(registrarVentas);
        cb_empleados->setObjectName("cb_empleados");
        cb_empleados->setGeometry(QRect(100, 120, 211, 26));
        cb_empleados->setFont(font);
        label_3 = new QLabel(registrarVentas);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 120, 101, 16));
        QFont font1;
        font1.setPointSize(10);
        font1.setWeight(QFont::DemiBold);
        label_3->setFont(font1);
        layoutWidget_3 = new QWidget(registrarVentas);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 10, 391, 35));
        layoutWidget_3->setFont(font);
        gridLayout_4 = new QGridLayout(layoutWidget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_3);
        label->setObjectName("label");
        label->setFont(font1);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        txt_cedula = new QLineEdit(layoutWidget_3);
        txt_cedula->setObjectName("txt_cedula");
        txt_cedula->setFont(font);

        gridLayout_4->addWidget(txt_cedula, 0, 1, 1, 1);

        btn_buscar = new QPushButton(layoutWidget_3);
        btn_buscar->setObjectName("btn_buscar");
        btn_buscar->setFont(font);

        gridLayout_4->addWidget(btn_buscar, 0, 2, 1, 1);

        layoutWidget_4 = new QWidget(registrarVentas);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(340, 430, 221, 141));
        layoutWidget_4->setFont(font);
        gridLayout_2 = new QGridLayout(layoutWidget_4);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        lbl_subtotal = new QLabel(layoutWidget_4);
        lbl_subtotal->setObjectName("lbl_subtotal");
        lbl_subtotal->setFont(font);
        lbl_subtotal->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(lbl_subtotal, 0, 1, 1, 1);

        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        lbl_iva = new QLabel(layoutWidget_4);
        lbl_iva->setObjectName("lbl_iva");
        lbl_iva->setFont(font);
        lbl_iva->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(lbl_iva, 1, 1, 1, 1);

        label_11 = new QLabel(layoutWidget_4);
        label_11->setObjectName("label_11");
        label_11->setFont(font1);

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        lbl_total = new QLabel(layoutWidget_4);
        lbl_total->setObjectName("lbl_total");
        lbl_total->setFont(font);
        lbl_total->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(lbl_total, 2, 1, 1, 1);

        btn_pagar = new QPushButton(layoutWidget_4);
        btn_pagar->setObjectName("btn_pagar");
        btn_pagar->setFont(font);

        gridLayout_2->addWidget(btn_pagar, 3, 0, 1, 2);

        label_2 = new QLabel(registrarVentas);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 75, 22));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(registrarVentas);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 90, 75, 22));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbl_nombre = new QLabel(registrarVentas);
        lbl_nombre->setObjectName("lbl_nombre");
        lbl_nombre->setGeometry(QRect(100, 60, 217, 22));
        lbl_nombre->setFont(font);
        lbl_nombre->setFrameShape(QFrame::NoFrame);
        lbl_direccion = new QLabel(registrarVentas);
        lbl_direccion->setObjectName("lbl_direccion");
        lbl_direccion->setGeometry(QRect(100, 90, 217, 22));
        lbl_direccion->setFont(font);
        lbl_direccion->setFrameShape(QFrame::NoFrame);
        label_9 = new QLabel(registrarVentas);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(330, 60, 296, 22));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7 = new QLabel(registrarVentas);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(340, 80, 296, 36));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbl_telefono = new QLabel(registrarVentas);
        lbl_telefono->setObjectName("lbl_telefono");
        lbl_telefono->setGeometry(QRect(410, 50, 599, 37));
        lbl_telefono->setFont(font);
        lbl_telefono->setFrameShape(QFrame::NoFrame);
        lbl_correo = new QLabel(registrarVentas);
        lbl_correo->setObjectName("lbl_correo");
        lbl_correo->setGeometry(QRect(410, 60, 599, 80));
        lbl_correo->setFont(font);
        lbl_correo->setFrameShape(QFrame::NoFrame);
        label_5 = new QLabel(registrarVentas);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 150, 116, 28));
        label_5->setFont(font1);
        cb_productos = new QComboBox(registrarVentas);
        cb_productos->setObjectName("cb_productos");
        cb_productos->setGeometry(QRect(100, 150, 211, 28));
        cb_productos->setFont(font);
        label_6 = new QLabel(registrarVentas);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(330, 140, 147, 28));
        label_6->setFont(font1);
        spinBox_cantidad = new QSpinBox(registrarVentas);
        spinBox_cantidad->setObjectName("spinBox_cantidad");
        spinBox_cantidad->setGeometry(QRect(410, 140, 181, 28));
        spinBox_cantidad->setFont(font);
        btn_anadir = new QPushButton(registrarVentas);
        btn_anadir->setObjectName("btn_anadir");
        btn_anadir->setGeometry(QRect(20, 190, 571, 31));
        btn_anadir->setFont(font);

        retranslateUi(registrarVentas);

        QMetaObject::connectSlotsByName(registrarVentas);
    } // setupUi

    void retranslateUi(QWidget *registrarVentas)
    {
        registrarVentas->setWindowTitle(QCoreApplication::translate("registrarVentas", "Registro de Ventas", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_ventas->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("registrarVentas", "CANTIDAD", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_ventas->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("registrarVentas", "PRODCUTO", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_ventas->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("registrarVentas", "CANTIDAD", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_ventas->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("registrarVentas", "TOTAL", nullptr));
        label_3->setText(QCoreApplication::translate("registrarVentas", "Empleado", nullptr));
        label->setText(QCoreApplication::translate("registrarVentas", "CI:", nullptr));
        btn_buscar->setText(QCoreApplication::translate("registrarVentas", "Buscar", nullptr));
        label_8->setText(QCoreApplication::translate("registrarVentas", "Subtotal:", nullptr));
        lbl_subtotal->setText(QCoreApplication::translate("registrarVentas", "0.0", nullptr));
        label_10->setText(QCoreApplication::translate("registrarVentas", "Iva 15%", nullptr));
        lbl_iva->setText(QCoreApplication::translate("registrarVentas", "0.0", nullptr));
        label_11->setText(QCoreApplication::translate("registrarVentas", "Total:", nullptr));
        lbl_total->setText(QCoreApplication::translate("registrarVentas", "0.0", nullptr));
        btn_pagar->setText(QCoreApplication::translate("registrarVentas", "Pagar", nullptr));
        label_2->setText(QCoreApplication::translate("registrarVentas", "Nombre:", nullptr));
        label_4->setText(QCoreApplication::translate("registrarVentas", "Direccion:", nullptr));
        lbl_nombre->setText(QCoreApplication::translate("registrarVentas", "_______________________________", nullptr));
        lbl_direccion->setText(QCoreApplication::translate("registrarVentas", "_______________________________", nullptr));
        label_9->setText(QCoreApplication::translate("registrarVentas", "Telefono:", nullptr));
        label_7->setText(QCoreApplication::translate("registrarVentas", "Correo:", nullptr));
        lbl_telefono->setText(QCoreApplication::translate("registrarVentas", "_______________________________", nullptr));
        lbl_correo->setText(QCoreApplication::translate("registrarVentas", "_______________________________", nullptr));
        label_5->setText(QCoreApplication::translate("registrarVentas", "Producto:", nullptr));
        label_6->setText(QCoreApplication::translate("registrarVentas", "Cantidad:", nullptr));
        btn_anadir->setText(QCoreApplication::translate("registrarVentas", "A\303\261adir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrarVentas: public Ui_registrarVentas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARVENTAS_H
