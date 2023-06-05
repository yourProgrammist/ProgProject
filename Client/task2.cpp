#include "task2.h"
#include "ui_task2.h"
#include "Random.hpp"
#include <QDebug>
#include <iostream>
#include <vector>
//#include "tree.h"
#include "client.h"
task2::task2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::task2)
{
    ui->setupUi(this);
}

task2::~task2()
{
    delete ui;
}

void task2::setTaskNumber(int n, QString _log)
{
    task_number = n;
    log = _log;
    generate_variant();
    show();
}

void task2::generate_variant(){
    /*
    Генерация 7 случайных цифр в диапозоне (1 - 9)
    */
    QString text = "";
    for (int i = 0; i < 7; i++){
        int a = Random::get(1, 9);
        text.append(QString::number(a));
        text.append(", ");
    }
    text.resize(text.size() - 2);
    ui->prufer->setText(text);
}

bool task2::on_button_decode_clicked(){
    QString ss = ui->prufer->text(); //Получаем строку
    qDebug() << ss;
    QString v1 = ui->lineEdit1->text();
    QString v2 = ui->lineEdit2->text();
    QString v3 = ui->lineEdit3->text();
    QString v4 = ui->lineEdit4->text();
    QString v5 = ui->lineEdit5->text();
    QString v6 = ui->lineEdit6->text();
    QString v7 = ui->lineEdit7->text();
    QString v8 = ui->lineEdit8->text();
    QString v9 = ui->lineEdit9->text();
    QString a = check_ans(task_number, ss, v1+"|"+v2+"|"+v3+"|"+v4+"|"+v5+"|"+v6+"|"+v7+"|"+v8+"|"+v9, log);
    qDebug() << a;
    if (a == "true"){
        ui->result->setText("Всё верно!");
    }
    else{
        ui->result->setText("Неправильно!");
    }
    return true;

}

