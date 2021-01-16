QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    widget.cpp

HEADERS += \
    widget.h

FORMS += \
    widget.ui
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



#下边这些是自己导入的
OPENCV_PATH = D:/OpenCV/opencv/build# 你的opencv folder
INCLUDEPATH += $${OPENCV_PATH}/include/opencv2 \

CONFIG(release, debug|release) {
LIBS += $${OPENCV_PATH}/x64/vc14/lib/opencv_world451.lib \
LIBS += $${OPENCV_PATH}/x64/vc14/lib/opencv_world451d.lib \
LIBS += $${OPENCV_PATH}/x64/vc15/lib/opencv_world451.lib \
LIBS += $${OPENCV_PATH}/x64/vc15/lib/opencv_world451d.lib \
}

CONFIG(debug , debug|release) {
LIBS += $${OPENCV_PATH}/x64/vc14/lib/opencv_world451.lib \
LIBS += $${OPENCV_PATH}/x64/vc14/lib/opencv_world451d.lib \
LIBS += $${OPENCV_PATH}/x64/vc15/lib/opencv_world451.lib \
LIBS += $${OPENCV_PATH}/x64/vc15/lib/opencv_world451d.lib \
}

#暂时还有缺陷，需要再改
# .... 你想用的库 release 版本 /x64, /vc11 对应你的编译器版本
#
