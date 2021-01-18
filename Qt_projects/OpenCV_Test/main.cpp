#include "widget.h"
#include <iostream>
#include <QApplication>
#include "opencv.hpp"
using namespace cv;
int main(int argc, char *argv[])
{

//    VideoCapture capture(0);
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
