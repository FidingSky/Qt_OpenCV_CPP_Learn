#ifndef LOGIN_SUCCESS_PAGE_H
#define LOGIN_SUCCESS_PAGE_H

#include <QWidget>

namespace Ui {
class login_success_page;
}

class login_success_page : public QWidget
{
    Q_OBJECT

public:
    explicit login_success_page(QWidget *parent = nullptr);
    ~login_success_page();

private slots:
    void on_pushButton_clicked();

private:
    Ui::login_success_page *ui;
};

#endif // LOGIN_SUCCESS_PAGE_H
