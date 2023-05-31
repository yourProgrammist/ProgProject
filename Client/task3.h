#ifndef TASK3_H
#define TASK3_H

#include <QMainWindow>

namespace Ui {
class task3;
}

class task3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit task3(QWidget *parent = nullptr);
    ~task3();

private:
    Ui::task3 *ui;
};

#endif // TASK3_H
