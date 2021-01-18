#ifndef REGISTER_SUCCESS_H
#define REGISTER_SUCCESS_H

#include <QWidget>

namespace Ui {
class register_success;
}

class register_success : public QWidget
{
    Q_OBJECT

public:
    explicit register_success(QWidget *parent = nullptr);
    ~register_success();

private slots:
    void on_pushButton_clicked();

private:
    Ui::register_success *ui;
};

#endif // REGISTER_SUCCESS_H
