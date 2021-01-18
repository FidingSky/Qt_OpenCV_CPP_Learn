#include "register_success.h"
#include "ui_register_success.h"
#include "widget.h"
register_success::register_success(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::register_success)
{
    ui->setupUi(this);
}

register_success::~register_success()
{
    delete ui;
}

void register_success::on_pushButton_clicked()
{
    Widget *wd = new Widget;//包含了widget头文件，使得可以用Widget类创建指针对象wd
    wd ->setGeometry(this->geometry());//保证窗口大小和当前一样
    wd ->show();//显示
    this->close();

}
