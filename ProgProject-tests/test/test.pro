QT += testlib
QT += gui
QT += network #Для работы с сетью
QT += sql

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_test.cpp \
    ../../ProgProject-main/db.cpp \
    ../../ProgProject-main/functionforserver.cpp \
    ../../ProgProject-main/mytcpserver.cpp \
    ../../ProgProject-main/node.cpp \
    ../../ProgProject-main/tree.cpp


HEADERS += \
    ../../ProgProject-main/db.h \
    ../../ProgProject-main/functioforserver.h \
    ../../ProgProject-main/mytcpserver.h \
    ../../ProgProject-main/node.h \
    ../../ProgProject-main/tree.h
