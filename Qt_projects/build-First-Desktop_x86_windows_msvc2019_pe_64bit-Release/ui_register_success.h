/********************************************************************************
** Form generated from reading UI file 'register_success.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_SUCCESS_H
#define UI_REGISTER_SUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register_success
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *register_success)
    {
        if (register_success->objectName().isEmpty())
            register_success->setObjectName(QString::fromUtf8("register_success"));
        register_success->resize(800, 480);
        gridLayout = new QGridLayout(register_success);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 93, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(265, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        label = new QLabel(register_success);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(34);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(265, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 94, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(265, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        pushButton = new QPushButton(register_success);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setPointSize(45);
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 93, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(173, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);


        retranslateUi(register_success);

        QMetaObject::connectSlotsByName(register_success);
    } // setupUi

    void retranslateUi(QWidget *register_success)
    {
        register_success->setWindowTitle(QApplication::translate("register_success", "Form", nullptr));
        label->setText(QApplication::translate("register_success", "\346\263\250\345\206\214\346\210\220\345\212\237", nullptr));
        pushButton->setText(QApplication::translate("register_success", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_success: public Ui_register_success {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_SUCCESS_H
