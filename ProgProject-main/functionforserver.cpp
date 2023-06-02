#include "functioforserver.h"
#include <QDebug>



QByteArray reg(QString log, QString pass,QString mail, QString role)
{
    return Db::getInstance()->reg(log,pass,mail, role);
}


QByteArray auth(QString log, QString pass,int desc)
{
    return Db::getInstance()->auth(log,pass,desc);
}

QByteArray check_ans(QString task_number,QString variant, QString ans, QString log){
    bool res = false;
    if(task_number=="1")
    {
        res = (ans==solver_task1(variant));
    }
    else if(task_number=="2")
    {
        res = (ans == solver_task2(variant));
    }
    if(res)
        ans = "true";
    return Db::getInstance()->check_ans(task_number, variant, ans, log);
}

QByteArray count_stat(QString log){
    return Db::getInstance()->count_stat(log);
}
QByteArray count_stat1(QString log){
    return Db::getInstance()->count_stat1(log);
}
QByteArray count_stat2(QString log){
    return Db::getInstance()->count_stat2(log);
}
QByteArray count_stat3(QString log){
    return Db::getInstance()->count_stat3(log);
}

QByteArray check_role(QString log){
    return Db::getInstance()->check_role(log);
}


void del(int desc)
{
    Db::getInstance()->del_status(desc);
}

QByteArray parsing (QString data_from_client,int desc)
{
    if(data_from_client.contains('&'))
    {

        QStringList data_from_client_list = data_from_client.split(QLatin1Char('&'));
        qDebug() << data_from_client_list;
        QString log, pass, mail, role;
        QString variant, text, task_number;

        if(data_from_client_list.front() == "reg")
        {
            data_from_client_list.pop_front();
            log = data_from_client_list.front();
            data_from_client_list.pop_front();
            pass = data_from_client_list.front();
            data_from_client_list.pop_front();
            mail = data_from_client_list.front();
            data_from_client_list.pop_front();
            role = data_from_client_list.front();
            return reg(log, pass,mail, role);
        }
        if(data_from_client_list.front() == "auth")
        {
            data_from_client_list.pop_front();
            log = data_from_client_list.front();
            data_from_client_list.pop_front();
            pass = data_from_client_list.front();
            return auth(log, pass, desc);
        }
        if(data_from_client_list.front() == "check")
        {
            data_from_client_list.pop_front();
            task_number = data_from_client_list.front();
            data_from_client_list.pop_front();
            variant = data_from_client_list.front();
            data_from_client_list.pop_front();
            text = data_from_client_list.front();
            data_from_client_list.pop_front();
            log = data_from_client_list.front();
            qDebug() << "Debug";
            return check_ans(task_number, variant, text, log);
        }
        if(data_from_client_list.front() == "stat")
        {
            qDebug() << data_from_client;
            data_from_client_list.pop_front();
            log = data_from_client_list.front();
            return count_stat(log);
        }
        if(data_from_client_list.front() == "stat1")
        {
            qDebug() << data_from_client;
            data_from_client_list.pop_front();
            log = data_from_client_list.front();
            return count_stat1(log);
        }
        if(data_from_client_list.front() == "stat2")
        {
            qDebug() << data_from_client;
            data_from_client_list.pop_front();
            log = data_from_client_list.front();
            return count_stat2(log);
        }
        if(data_from_client_list.front() == "stat3")
        {
            qDebug() << data_from_client;
            data_from_client_list.pop_front();
            log = data_from_client_list.front();
            return count_stat3(log);
        }
        if(data_from_client_list.front() == "role")
        {
            qDebug() << data_from_client;
            data_from_client_list.pop_front();
            log = data_from_client_list.front();
            return check_role(log);
        }
    } else
    {
        return data_from_client.toUtf8();;
    }
}

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

QString solver_task2(QString ss)
{

    QStringList ww=ss.split(", ");
    qDebug() << ww;
    QVector<QString> vss=ww.toVector();
    qDebug() << vss;
    std::vector <int> vv_new;
    for (int i = 0; i<vss.size();i++){
        vv_new.push_back(vss[i].toInt());

    }
    qDebug() << vv_new.size();
    for (int i = 0; i<vv_new.size();i++){
        qDebug() << vv_new[i];
    }
    std::vector <std::vector <int>> smeg = get_smeg_by_cod_prufer(vv_new);
    QString s1;// Это строка в укоторую будем добавлять числа
    QString s2;
    QString s3;
    QString s4;
    QString s5;
    QString s6;
    QString s7;
    QString s8;
    QString s9;

    for(int i = 0; i < smeg[0].size();i++){
        s1+=QString::number(smeg[0][i]);
    }
    for(int i = 0; i < smeg[1].size();i++){
        s2+=QString::number(smeg[1][i]);
    }
    for(int i = 0; i < smeg[2].size();i++){
        s3+=QString::number(smeg[2][i]);
    }
    for(int i = 0; i < smeg[3].size();i++){
        s4+=QString::number(smeg[3][i]);
    }
    for(int i = 0; i < smeg[4].size();i++){
        s5+=QString::number(smeg[4][i]);
    }
    for(int i = 0; i < smeg[5].size();i++){
        s6+=QString::number(smeg[5][i]);
    }
    for(int i = 0; i < smeg[6].size();i++){
        s7+=QString::number(smeg[6][i]);
    }
    for(int i = 0; i < smeg[7].size();i++){
        s8+=QString::number(smeg[7][i]);
    }
    for(int i = 0; i < smeg[8].size();i++){
        s9+=QString::number(smeg[8][i]);
    }
    get_smeg_by_cod_prufer(vv_new);
    print_smeg(get_smeg_by_cod_prufer(vv_new));
    qDebug()<<s1+"|"+s2+"|"+s3+"|"+s4+"|"+s5+"|"+s6+"|"+s7+"|"+s8+"|"+s9;
    return s1+"|"+s2+"|"+s3+"|"+s4+"|"+s5+"|"+s6+"|"+s7+"|"+s8+"|"+s9;
}
