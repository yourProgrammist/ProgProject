#include "functionsforclient.h"
#include "authform.h"
#include "task1.h"
#include <QWidget>

QString auth(QString log, QString pass)
{
    QString res ="auth&"+log+"&"+pass;
    //qDebug()<<Client::send_to_server(res);
    return Client::getInstance()->send_to_server(res);
}
QString reg(QString log, QString pass, QString email, bool role)
{
    QString res;
    if(role==true){
        res ="reg&"+log+"&"+pass+"&"+email+"&"+"1";
    }else{
        res ="reg&"+log+"&"+pass+"&"+email+"&"+"0";
    }

    return Client::getInstance()->send_to_server(res);
}
QString look_stat(QString log)
{
    QString res ="stat&"+log;
    //qDebug()<<res;
    return Client::getInstance()->send_to_server(res);
}

QString look_stat1(QString log)
{
    QString res ="stat1&"+log;
    //qDebug()<<res;
    return Client::getInstance()->send_to_server(res);
}
QString look_stat2(QString log)
{
    QString res ="stat2&"+log;
    //qDebug()<<res;
    return Client::getInstance()->send_to_server(res);
}
QString look_stat3(QString log)
{
    QString res ="stat3&"+log;
    //qDebug()<<res;
    return Client::getInstance()->send_to_server(res);
}
QString del_status(QString log)
{
    QString res ="del&"+log;
    //qDebug()<<res;
    return Client::getInstance()->send_to_server(res);
}
QString check_ans(int task_number, QString variant, QString text, QString log){
    QString res = "check&" + QString::number(task_number)+"&"+ variant+"&"+text+"&"+log;
    qDebug()<<res;
    return Client::getInstance()->send_to_server(res);
}
void update_stat(int n, QString upd)
{
    //QString log = Ui::FormAuth *ui -> lineEdit_log -> text();
    QString res ="updstat&"+QString::number(n)+"&"+upd;
    qDebug()<<res;
    Client::getInstance()->send_to_server(res);
}

QString check_role(QString log){
    QString res = "role&"+log;
    return Client::getInstance()->send_to_server(res);
}
/*
QString solver_task1(QString var){
    qDebug()<<var;
    bool ok;
    long int vars = var.toLong(&ok);

    qDebug()<<vars;
    std::vector<int> tree = { (vars/10000000%10), (vars/100000000), (vars/10000000%10), (vars/1000%10), (vars/100000000), (vars/100%10), (vars/100000000), (vars/10%10), (vars/1000%10),(vars/10000%10), (vars/10000%10),(vars/100000%10), (vars/10000%10), (vars%10), (vars/10000%10), (vars/1000000%10) };
    std::list<int> ans;
    for(auto i : tree){
        qDebug()<<i;
    }
    while (tree.size() > 2) {
        for (int i = 1; i < 10; i++) {
            int count = 0;
            int min;
            for (int k = 0; k < tree.size(); k++) {
                if (i == tree[k]) {
                    count++;
                }
            }
            if (count == 1) {
                min = i;
                for (int s = 0; s < tree.size(); s++) {
                    if (min == tree[s]) {
                        if (s % 2 != 0) {
                            ans.push_back(tree[s - 1]);
                            tree.erase(tree.begin() + s);
                            tree.erase(tree.begin() + s - 1);
                        }
                        else {
                            ans.push_back(tree[s+1]);
                            tree.erase(tree.begin() + s);
                            tree.erase(tree.begin() + s + 1);
                        }
                    }
                }
                break;
            }
        }
    }

    QString res;
    for(auto i : ans){
        res += QString::number(i);
    }
    qDebug()<<res;
    return res;

}
*/
