#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "ui_task1.h"
#include "ui_task2.h"
#include "ui_task3.h"
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_auth = new AuthForm;
    ui_task1 = new task1;
    ui_task2 = new task2;
    ui_task3 = new task3;
    QObject::connect(ui_auth, &AuthForm::onClosed, this, &MainWindow::slot_show);
    ui_auth->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_menu_exit_triggered()
{
    on_but_exit_clicked();
}
void MainWindow::on_menu_task1_triggered()
{
    on_but_task1_clicked();
}
void MainWindow::on_menu_task2_triggered()
{
    on_but_task2_clicked();
}
void MainWindow::on_menu_task3_triggered()
{
    on_but_task3_clicked();
}
void MainWindow::on_menu_task4_triggered()
{
    on_but_task4_clicked();
}



void MainWindow::on_but_exit_clicked()
{
    this->close();
}

void MainWindow::on_but_task1_clicked()
{
    ui_task1->setTaskNumber(1, ui->name_label->text());
}

void MainWindow::on_but_task2_clicked()
{
    ui_task2->setTaskNumber(2, ui->name_label->text());
    ui_task2->generate_variant();


}

void MainWindow::on_but_task3_clicked()
{
    ui_task3->show();
}

void MainWindow::on_but_task4_clicked()
{
    ui_task1->setTaskNumber(4, ui->name_label->text());
}
void MainWindow::slot_show(QString log){
    this->show();
    ui->name_label->setText(log);
}

void MainWindow::on_stat_button_clicked()
{
   QString log = ui->name_label->text();
   QString task1 = look_stat(log);
   QString task2 = look_stat1(log);
   QString task3 = look_stat2(log);
   QString task4 = look_stat3(log);
   QMessageBox temp;
   temp.setText("Задача 1 - " + task1 +  "\n" + "Задача 2 - " + task2 + "\n" + "Задача 3 - " + task3 + "\n" + "Задача 4 -" + task4);
   temp.exec();
}

