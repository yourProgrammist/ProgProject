#include "task1.h"
#include "ui_task1.h"


task1::task1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::task1)
{
    ui->setupUi(this);
}

task1::~task1()
{
    delete ui;
}

void task1::setTaskNumber(int n)
{
    task_number = n;
    variant = generateVariant(n);
    ui->textBrowser->setText(generateTask(n)+"\n"+variant);
    show();
}

void task1::on_send_answer_but_clicked()
{
    qDebug() << "chech&" + QString::number(task_number)+"&"+ variant+"&"+ui->lineEdit_answer->text();
}

QString task1::generateTask(int n)
{
    switch (n) {
    case 1:
        return "Кодер Прюфера для деревьев.\nПо данному дереву T найти код C Прюфера.\n";
        break;
    default:
        return "task task task task task "+QString::number(n);
        break;
    }
}
QString task1::generateVariant(int n)
{
    return "variant"+QString::number(n);
    close();
}
