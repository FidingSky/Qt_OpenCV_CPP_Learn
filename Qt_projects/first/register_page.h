#ifndef REGISTER_PAGE_H
#define REGISTER_PAGE_H

#include <QWidget>

namespace Ui {
class register_page;
}

class register_page : public QWidget
{
    Q_OBJECT

public:
    explicit register_page(QWidget *parent = nullptr);
    ~register_page();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::register_page *ui;
};

#endif // REGISTER_PAGE_H
