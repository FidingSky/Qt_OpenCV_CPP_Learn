/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *chuankouhao;
    QLabel *label_2;
    QComboBox *botelv;
    QLabel *label_3;
    QComboBox *shujuwei;
    QLabel *label_4;
    QComboBox *tingzhiwei;
    QLabel *label_5;
    QComboBox *jiaoyanwei;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLineEdit *fasong_edit;
    QHBoxLayout *horizontalLayout;
    QPushButton *dakaichuankou;
    QSpacerItem *horizontalSpacer;
    QPushButton *guanbichuankou;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *qingkong;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *fakong;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 480);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        chuankouhao = new QComboBox(Widget);
        chuankouhao->addItem(QString());
        chuankouhao->addItem(QString());
        chuankouhao->addItem(QString());
        chuankouhao->addItem(QString());
        chuankouhao->addItem(QString());
        chuankouhao->setObjectName(QString::fromUtf8("chuankouhao"));

        gridLayout->addWidget(chuankouhao, 0, 1, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        botelv = new QComboBox(Widget);
        botelv->addItem(QString());
        botelv->addItem(QString());
        botelv->addItem(QString());
        botelv->setObjectName(QString::fromUtf8("botelv"));

        gridLayout->addWidget(botelv, 1, 1, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        shujuwei = new QComboBox(Widget);
        shujuwei->addItem(QString());
        shujuwei->addItem(QString());
        shujuwei->addItem(QString());
        shujuwei->addItem(QString());
        shujuwei->setObjectName(QString::fromUtf8("shujuwei"));

        gridLayout->addWidget(shujuwei, 2, 1, 1, 1);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        tingzhiwei = new QComboBox(Widget);
        tingzhiwei->addItem(QString());
        tingzhiwei->addItem(QString());
        tingzhiwei->addItem(QString());
        tingzhiwei->addItem(QString());
        tingzhiwei->addItem(QString());
        tingzhiwei->setObjectName(QString::fromUtf8("tingzhiwei"));

        gridLayout->addWidget(tingzhiwei, 3, 1, 1, 1);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        jiaoyanwei = new QComboBox(Widget);
        jiaoyanwei->addItem(QString());
        jiaoyanwei->setObjectName(QString::fromUtf8("jiaoyanwei"));

        gridLayout->addWidget(jiaoyanwei, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(18);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        fasong_edit = new QLineEdit(Widget);
        fasong_edit->setObjectName(QString::fromUtf8("fasong_edit"));

        verticalLayout->addWidget(fasong_edit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dakaichuankou = new QPushButton(Widget);
        dakaichuankou->setObjectName(QString::fromUtf8("dakaichuankou"));

        horizontalLayout->addWidget(dakaichuankou);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        guanbichuankou = new QPushButton(Widget);
        guanbichuankou->setObjectName(QString::fromUtf8("guanbichuankou"));

        horizontalLayout->addWidget(guanbichuankou);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        qingkong = new QPushButton(Widget);
        qingkong->setObjectName(QString::fromUtf8("qingkong"));

        horizontalLayout->addWidget(qingkong);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        fakong = new QPushButton(Widget);
        fakong->setObjectName(QString::fromUtf8("fakong"));

        horizontalLayout->addWidget(fakong);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);


        retranslateUi(Widget);

        botelv->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267", nullptr));
        chuankouhao->setItemText(0, QApplication::translate("Widget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        chuankouhao->setItemText(1, QApplication::translate("Widget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        chuankouhao->setItemText(2, QApplication::translate("Widget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        chuankouhao->setItemText(3, QApplication::translate("Widget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        chuankouhao->setItemText(4, QApplication::translate("Widget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));

        label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        botelv->setItemText(0, QApplication::translate("Widget", "4800", nullptr));
        botelv->setItemText(1, QApplication::translate("Widget", "9200", nullptr));
        botelv->setItemText(2, QApplication::translate("Widget", "115200", nullptr));

        label_3->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        shujuwei->setItemText(0, QApplication::translate("Widget", "8", nullptr));
        shujuwei->setItemText(1, QApplication::translate("Widget", "4", nullptr));
        shujuwei->setItemText(2, QApplication::translate("Widget", "2", nullptr));
        shujuwei->setItemText(3, QApplication::translate("Widget", "1", nullptr));

        label_4->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        tingzhiwei->setItemText(0, QApplication::translate("Widget", "8", nullptr));
        tingzhiwei->setItemText(1, QApplication::translate("Widget", "4", nullptr));
        tingzhiwei->setItemText(2, QApplication::translate("Widget", "3", nullptr));
        tingzhiwei->setItemText(3, QApplication::translate("Widget", "2", nullptr));
        tingzhiwei->setItemText(4, QApplication::translate("Widget", "1", nullptr));

        label_5->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", nullptr));
        jiaoyanwei->setItemText(0, QApplication::translate("Widget", "\346\262\241\346\234\211\346\240\241\351\252\214", nullptr));

        label_6->setText(QApplication::translate("Widget", "\350\207\252\345\210\266\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
        dakaichuankou->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        guanbichuankou->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        qingkong->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        fakong->setText(QApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
