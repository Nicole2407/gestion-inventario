/********************************************************************************
** Form generated from reading UI file 'consultar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTAR_H
#define UI_CONSULTAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consultar
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *twdg;
    QPushButton *pbtn_msotrar;

    void setupUi(QWidget *consultar)
    {
        if (consultar->objectName().isEmpty())
            consultar->setObjectName("consultar");
        consultar->resize(429, 345);
        layoutWidget = new QWidget(consultar);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 401, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        twdg = new QTableWidget(layoutWidget);
        if (twdg->columnCount() < 4)
            twdg->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twdg->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twdg->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twdg->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twdg->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        twdg->setObjectName("twdg");

        verticalLayout->addWidget(twdg);

        pbtn_msotrar = new QPushButton(consultar);
        pbtn_msotrar->setObjectName("pbtn_msotrar");
        pbtn_msotrar->setGeometry(QRect(10, 310, 399, 31));
        QFont font;
        font.setPointSize(11);
        pbtn_msotrar->setFont(font);

        retranslateUi(consultar);

        QMetaObject::connectSlotsByName(consultar);
    } // setupUi

    void retranslateUi(QWidget *consultar)
    {
        consultar->setWindowTitle(QCoreApplication::translate("consultar", "Consultar Productos", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twdg->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("consultar", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twdg->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("consultar", "Stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = twdg->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("consultar", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = twdg->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("consultar", "Total", nullptr));
        pbtn_msotrar->setText(QCoreApplication::translate("consultar", "Mostrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consultar: public Ui_consultar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTAR_H
