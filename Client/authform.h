#ifndef AUTHFORM_H
#define AUTHFORM_H

#include <QWidget>
#include <QString>
#include <qDebug>
#include "functionsforclient.h"
#include "client.h"

namespace Ui {
class AuthForm;
}

class AuthForm : public QWidget
{
    Q_OBJECT

public:
    explicit AuthForm(QWidget *parent = nullptr);
    ~AuthForm();

private slots:
    void on_but_sign_up_clicked();

    void on_but_sign_in_clicked();

    void on_but_exit_clicked();

    void check_auth();


private:
    Ui::AuthForm *ui;
    void change_mode(bool);//mode == true if registration
    bool mode = false;
signals:
    void onClosed(QString);
};


#endif // AUTHFORM_H
