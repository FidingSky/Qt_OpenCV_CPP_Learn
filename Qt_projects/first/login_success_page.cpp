#include "login_success_page.h"
#include "ui_login_success_page.h"
#include "widget.h"

#include<QDesktopWidget>
#include<QStyle>
#include<QRect>//用来自动获取屏幕大小相关的头文件
login_success_page::login_success_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login_success_page)
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

login_success_page::~login_success_page()
{
    delete ui;
}

void login_success_page::on_pushButton_clicked()
{
    Widget *wd = new Widget;
    wd->show();
    this->close();
}
