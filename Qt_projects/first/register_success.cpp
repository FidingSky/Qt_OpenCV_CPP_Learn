#include "register_success.h"
#include "ui_register_success.h"
#include "widget.h"

#include<QDesktopWidget>
#include<QStyle>
#include<QRect>//用来自动获取屏幕大小相关的头文件
register_success::register_success(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::register_success)
{
    ui->setupUi(this);
    //下边这几句是用来自动获取屏幕大小并且使窗口这么大的
        QDesktopWidget *desktopWidget=QApplication::desktop();
        QRect deskReck = desktopWidget->availableGeometry();
        int appH = deskReck.height();
        int appW = deskReck.width();
        this->setFixedSize(appW,appH);
        setGeometry(0,0,appW,appH);
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
