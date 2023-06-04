#ifndef TASK3_H
#define TASK3_H

#include <QMainWindow>
#include "functionsforclient.h"
#include "ui_mainwindow.h"

namespace Ui {
class task3;
}

class task3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit task3(QWidget *parent = nullptr);
    ~task3();
    bool graph(QString num);

private slots:
    bool on_but_clicked();
private:
    Ui::task3 *ui;
};

#endif // TASK3_H
