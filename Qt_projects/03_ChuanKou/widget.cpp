#include "widget.h"
#include "ui_widget.h"
#include <QSerialPortInfo>//需要导入这个来读取当前系统串口信息，注意需要在pro文件里也导入

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QStringList serialNamePort;//声明StringList类型准备存储数据

    foreach (const QSerialPortInfo &info ,QSerialPortInfo::availablePorts()) {
        serialNamePort<<info.portName();//将当前系统串口信息导入serialNamePort
    }
    ui->chuankouhao->addItems(serialNamePort);//将串口数据显示在串口号的下拉框里

}

Widget::~Widget()
{
    delete ui;
}

