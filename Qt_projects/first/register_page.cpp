#include "register_page.h"
#include "ui_register_page.h"
#include "widget.h"//注意这个地方是手动添加的，如果想要和widget页面进行联系的话（调用该页面的类）
#include "register_success.h"//同上
register_page::register_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::register_page)
{
    ui->setupUi(this);
}

register_page::~register_page()
{
    delete ui;
}

void register_page::on_pushButton_2_clicked()
{
    Widget *wd = new Widget;//包含了widget头文件，使得可以用Widget类创建指针对象wd
    wd ->setGeometry(this->geometry());//保证窗口大小和当前一样
    wd ->show();//显示
    this->close();

}

void register_page::on_register_button_in_register_page_clicked()
{
    register_success *rs = new register_success;//包含了widget头文件，使得可以用Widget类创建指针对象wd
    rs ->setGeometry(this->geometry());//保证窗口大小和当前一样
    rs ->show();//显示
    this->close();
}
