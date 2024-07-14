/********************************************************************************
** Form generated from reading UI file 'new_user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_USER_H
#define UI_NEW_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_user
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_email;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_psw;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_confirm;
    QPushButton *pushButton;

    void setupUi(QWidget *new_user)
    {
        if (new_user->objectName().isEmpty())
            new_user->setObjectName("new_user");
        new_user->resize(210, 185);
        layoutWidget = new QWidget(new_user);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 191, 161));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic")});
        font.setPointSize(11);
        layoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        txt_email = new QLineEdit(layoutWidget);
        txt_email->setObjectName("txt_email");
        txt_email->setFont(font);

        horizontalLayout->addWidget(txt_email);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        txt_psw = new QLineEdit(layoutWidget);
        txt_psw->setObjectName("txt_psw");
        txt_psw->setFont(font);

        horizontalLayout_2->addWidget(txt_psw);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        txt_confirm = new QLineEdit(layoutWidget);
        txt_confirm->setObjectName("txt_confirm");
        txt_confirm->setFont(font);

        horizontalLayout_3->addWidget(txt_confirm);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Yu Gothic")});
        font2.setPointSize(11);
        font2.setBold(false);
        pushButton->setFont(font2);

        verticalLayout->addWidget(pushButton);


        retranslateUi(new_user);

        QMetaObject::connectSlotsByName(new_user);
    } // setupUi

    void retranslateUi(QWidget *new_user)
    {
        new_user->setWindowTitle(QCoreApplication::translate("new_user", "Registrar Usuario", nullptr));
        label->setText(QCoreApplication::translate("new_user", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("new_user", "Pswrd", nullptr));
        label_3->setText(QCoreApplication::translate("new_user", "Confirm", nullptr));
        pushButton->setText(QCoreApplication::translate("new_user", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_user: public Ui_new_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_USER_H
