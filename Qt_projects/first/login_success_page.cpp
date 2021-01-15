#include "login_success_page.h"
#include "ui_login_success_page.h"
#include "widget.h"
login_success_page::login_success_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login_success_page)
{
    ui->setupUi(this);
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
