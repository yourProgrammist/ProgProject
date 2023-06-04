#include "task3.h"
#include "ui_task3.h"
#include <iostream>
#include <QVector>
#include <algorithm>

using namespace std;

task3::task3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::task3)
{
    ui->setupUi(this);
}

task3::~task3()
{
    delete ui;
}

bool task3::graph(QString userAnswer) {
    // Создаем заданный граф
    vector<vector<int>> A = {{1, 4}, {1, 2, 5}, {5, 6}};


    QList z = userAnswer.split(" ");
    // Разбиваем строку с ответом на отдельные числа и сортируем их
    vector<int> answer;
    int num;
    for (int i = 0; i < z.size(); i++) {
        if ((userAnswer[i]).digitValue()) {
            num = userAnswer.split(" ")[i].toInt();

            answer.push_back(num);
        }
    }
    sort(answer.begin(), answer.end());

    // Сравниваем ответ пользователя с системой множеств
    bool isCorrect = true;
    for (int i = 0; i < A.size(); i++) {
        bool found = false;
        for (int j = 0; j < answer.size(); j++) {
            if (::find(A[i].begin(), A[i].end(), answer[j]) != A[i].end()) {
                found = true;
                break;
            }
        }
        if (!found) {
            isCorrect = false;
            break;
        }
    }

    // Выводим результат
    if (isCorrect)
        return 1;
    else
        return 0;
};




bool task3::on_but_clicked(){
    QString ss = ui->lineEdit_1->text(); //Получаем строку
    qDebug() << ss;



    bool ff = graph(ss);
    if (ff == true){
        ui->result->setText("Результат верен!");
        return true;
    }
    else {
        ui->result->setText("Резутат не верен!");
        return false;
    }
}
