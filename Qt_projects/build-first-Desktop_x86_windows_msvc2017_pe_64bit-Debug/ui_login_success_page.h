/********************************************************************************
** Form generated from reading UI file 'login_success_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_SUCCESS_PAGE_H
#define UI_LOGIN_SUCCESS_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_success_page
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *login_success_page)
    {
        if (login_success_page->objectName().isEmpty())
            login_success_page->setObjectName(QString::fromUtf8("login_success_page"));
        login_success_page->resize(800, 600);
        QFont font;
        font.setPointSize(30);
        login_success_page->setFont(font);
        label = new QLabel(login_success_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 130, 211, 81));
        pushButton = new QPushButton(login_success_page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 240, 201, 111));

        retranslateUi(login_success_page);

        QMetaObject::connectSlotsByName(login_success_page);
    } // setupUi

    void retranslateUi(QWidget *login_success_page)
    {
        login_success_page->setWindowTitle(QApplication::translate("login_success_page", "Form", nullptr));
        label->setText(QApplication::translate("login_success_page", "\347\231\273\345\275\225\346\210\220\345\212\237", nullptr));
        pushButton->setText(QApplication::translate("login_success_page", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_success_page: public Ui_login_success_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_SUCCESS_PAGE_H
