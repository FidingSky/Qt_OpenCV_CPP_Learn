#include "widget.h"
#include "ui_widget.h"
#include <QSerialPortInfo>//需要导入这个来读取当前系统串口信息，注意需要在pro文件里也导入

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QStringList serialNamePort;//声明StringList类型准备存储数据
    serialPort = new QSerialPort(this);

    foreach (const QSerialPortInfo &info ,QSerialPortInfo::availablePorts()) {
        serialNamePort<<info.portName();//将当前系统串口信息导入serialNamePort
    }
    ui->chuankouhao->addItems(serialNamePort);//将串口数据显示在串口号的下拉框里

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_dakaichuankou_clicked()//打开串口按钮
{
    QSerialPort::BaudRate baudRate;
    QSerialPort::DataBits dataBits;
    QSerialPort::StopBits stopBits;
    QSerialPort::Parity checkBits;

    if(ui->botelv->currentText()=="4800"){
        baudRate = QSerialPort::Baud4800;
    }
    else if (ui->botelv->currentText()=="9600") {
        baudRate = QSerialPort::Baud9600;
    }
    else if (ui->botelv->currentText()=="115200") {
        baudRate = QSerialPort::Baud115200;
    }


    if(ui->shujuwei->currentText()=="5"){
        dataBits = QSerialPort::Data5;
    }
    else if (ui->shujuwei->currentText()=="6") {
        dataBits = QSerialPort::Data6;
    }
    else if (ui->shujuwei->currentText()=="7") {
        dataBits = QSerialPort::Data7;
    }
    else if (ui->shujuwei->currentText()=="8") {
        dataBits = QSerialPort::Data8;
    }

    if(ui->tingzhiwei->currentText()=="1"){
        stopBits = QSerialPort::OneStop;
    }
    else if (ui->tingzhiwei->currentText()=="1.5") {
        stopBits = QSerialPort::OneAndHalfStop;
    }
    else if (ui->tingzhiwei->currentText()=="2") {
        stopBits = QSerialPort::TwoStop;
    }

    if(ui->jiaoyanwei->currentText()=="没有校验"){
        checkBits = QSerialPort::NoParity;
    }

    //serialPort->setPort(ui->chuankouhao->currentText());
    serialPort->setBaudRate(baudRate);
    serialPort->setDataBits(dataBits);
    serialPort->setStopBits(stopBits);
    serialPort->setParity(checkBits);

}



