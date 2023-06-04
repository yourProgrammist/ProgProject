/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *menu_task1;
    QAction *menu_task2;
    QAction *menu_task3;
    QAction *menu_task4;
    QAction *menu_exit;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *but_task1;
    QPushButton *but_task2;
    QPushButton *but_task3;
    QPushButton *but_task4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *stat_label;
    QPushButton *but_exit;
    QLabel *name_label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(966, 593);
        menu_task1 = new QAction(MainWindow);
        menu_task1->setObjectName("menu_task1");
        menu_task2 = new QAction(MainWindow);
        menu_task2->setObjectName("menu_task2");
        menu_task3 = new QAction(MainWindow);
        menu_task3->setObjectName("menu_task3");
        menu_task4 = new QAction(MainWindow);
        menu_task4->setObjectName("menu_task4");
        menu_exit = new QAction(MainWindow);
        menu_exit->setObjectName("menu_exit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(210, 90, 481, 341));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        but_task1 = new QPushButton(verticalLayoutWidget);
        but_task1->setObjectName("but_task1");

        horizontalLayout->addWidget(but_task1);

        but_task2 = new QPushButton(verticalLayoutWidget);
        but_task2->setObjectName("but_task2");

        horizontalLayout->addWidget(but_task2);

        but_task3 = new QPushButton(verticalLayoutWidget);
        but_task3->setObjectName("but_task3");

        horizontalLayout->addWidget(but_task3);

        but_task4 = new QPushButton(verticalLayoutWidget);
        but_task4->setObjectName("but_task4");

        horizontalLayout->addWidget(but_task4);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        stat_label = new QLabel(verticalLayoutWidget);
        stat_label->setObjectName("stat_label");

        horizontalLayout_2->addWidget(stat_label);

        but_exit = new QPushButton(verticalLayoutWidget);
        but_exit->setObjectName("but_exit");

        horizontalLayout_2->addWidget(but_exit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        name_label = new QLabel(centralwidget);
        name_label->setObjectName("name_label");
        name_label->setGeometry(QRect(30, 20, 71, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 966, 29));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(menu_task1);
        menu->addAction(menu_task2);
        menu->addAction(menu_task3);
        menu->addAction(menu_task4);
        menu->addSeparator();
        menu->addAction(menu_exit);

        retranslateUi(MainWindow);
        QObject::connect(but_exit, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        menu_task1->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 1", nullptr));
        menu_task2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 2", nullptr));
        menu_task3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 3", nullptr));
        menu_task4->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 4", nullptr));
        menu_exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        but_task1->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 1", nullptr));
        but_task2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 2", nullptr));
        but_task3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 3", nullptr));
        but_task4->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 4", nullptr));
        stat_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h2 style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:x-large; font-weight:700;\">\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260</span></h2><p>\320\227\320\260\320\264\320\260\320\275\320\270\320\265 1 - 5</p><p>\320\227\320\260\320\264\320\260\320\275\320\270\320\265 2 - 4</p><p>\320\227\320\260\320\264\320\260\320\275\320\270\320\265 3 - 0</p><p>\320\227\320\260\320\264\320\260\320\275\320\270\320\265 4 - 2</p></body></html>", nullptr));
        but_exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        name_label->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
