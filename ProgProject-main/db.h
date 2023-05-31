#ifndef DB_H
#define DB_H

#include <QString>
#include <QVariant>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QByteArray>


class Db;

class DbDestroyer
{
private:
    Db * p_instance;
public:
    ~DbDestroyer() { if (p_instance!=nullptr) delete p_instance;}
    void initialize(Db * p){p_instance = p;}
};


class Db
{
 private:
    static Db * p_instance;
    static DbDestroyer destroyer;
    static QSqlDatabase db;
protected:
    Db()
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:\\1111\\ProgProject-main\\ProgProject-main\\DataBase.db");


        if(!db.open())
            qDebug()<<db.lastError().text();
    }
    Db(const Db& )=delete;
    Db& operator = (Db &)=delete;
    ~Db()
    {db.close();}
    friend class DbDestroyer;
public:
    static Db* getInstance(){
        if (!p_instance)
        {
            p_instance = new Db();
            destroyer.initialize(p_instance);
        }
        return p_instance;
    }


    QByteArray count_stat(QString log)
    {
        QByteArray result;
        QSqlQuery query(db);
        query.prepare("SELECT stat FROM user WHERE log = :log");
        query.bindValue(":log", log);
        query.exec();
        query.first();
        QString value = query.value(0).toString();
        qDebug() << value;
        return "stat" + value.toUtf8();
    }

    QByteArray count_stat1(QString log)
    {

        QByteArray result;
        QSqlQuery query(db);
        query.prepare("SELECT stat1 FROM user WHERE log = :log");
        query.bindValue(":log", log);
        query.exec();
        query.first();
        QString value = query.value(0).toString();
        qDebug() << value;
        return "stat" + value.toUtf8();
    }

     QByteArray count_stat2(QString log)
    {
         QByteArray result;
         QSqlQuery query(db);
         query.prepare("SELECT stat2 FROM user WHERE log = :log");
         query.bindValue(":log", log);
         query.exec();
         query.first();
         QString value = query.value(0).toString();
         qDebug() << value;
         return "stat" + value.toUtf8();
    }

     QByteArray count_stat3(QString log)
    {
         QByteArray result;
         QSqlQuery query(db);
         query.prepare("SELECT stat3 FROM user WHERE log = :log");
         query.bindValue(":log", log);
         query.exec();
         query.first();
         QString value = query.value(0).toString();
         qDebug() << value;
         return "stat" + value.toUtf8();
    }

     QByteArray check_ans(QString numb, QString variant, QString ans, QString log) {
        if (ans=="1234")
        {
            QSqlQuery query;
            if (numb=="1") query.prepare("UPDATE user SET stat=1 WHERE log=:log");
            else if (numb=="2") query.prepare("UPDATE user SET stat1=1 WHERE log=:log;");
            else if (numb=="3") query.prepare("UPDATE user SET stat2=1 WHERE log=:log;");
            else query.prepare("UPDATE user SET stat3=1 WHERE log=:log;");
            query.bindValue(":log", log);
            query.exec();
            query.clear();
            return "check_true";

        }
        else
        {
            db.open();
            QSqlQuery query;
            if (numb=='1') query.prepare("UPDATE user SET stat1=stat1-1, stat=stat-1 WHERE log=:log;");
            else if (numb=='2') query.prepare("UPDATE user SET stat2=stat2-1, stat=stat-1 WHERE log=:log;");
            else query.prepare("UPDATE user SET stat3=stat3-1, stat=stat-1 WHERE log=:log;");
            query.bindValue(":log", log);
            query.exec();
            db.close();
            query.clear();
            return "check_false";
        }
    }
    QByteArray auth(QString log, QString pass,int desc) {

        QSqlQuery query;
        query.prepare("SELECT * FROM user where log = :login and password = :password and status IS NULL" );
        query.bindValue(":login", log);
        query.bindValue(":password", pass);
        query.exec();
        if (query.next()){
            qDebug()<<log;
            query.exec("update user set status = '" +QString::number(desc)+"' where log = '"+log+"'" );

            return "auth_true";
        }
        else{
            return "auth_false";
        }
    }
    QByteArray reg(QString log, QString pass, QString mail, QString role)
    {
        QSqlQuery query;
        query.prepare("SELECT * FROM user where log = :login" );
        query.bindValue(":login", log);
        query.exec();
        if (query.next()){
            return "reg_false";
        }
        else{
            qDebug()<<role;
            query.prepare("INSERT INTO user (log, password, email, stat, status, stat1, stat2, stat3, role) VALUES (:login, :password, :email, 0, NULL, 0, 0, 0, :role)");
            query.bindValue(":login", log);
            query.bindValue(":password", pass);
            query.bindValue(":email", mail);
            query.bindValue(":role", role);
            query.exec();
            return "reg_true";
        }
    }
   QByteArray change_status(QString log, int sock_desc)
    {

        QSqlQuery query(db);
        query.prepare("UPDATE user SET status=:sock_desc WHERE log=:login");
        query.bindValue(":sock_desc", sock_desc);
        query.bindValue(":login", log);
        query.exec();

        query.clear();
        return "true";
    }

     QByteArray del_status(int sock_desc)
    {

        QSqlQuery query;
        query.prepare("UPDATE user SET status=NULL WHERE status=:sock_desc");
        query.bindValue(":sock_desc", sock_desc);
        //query.bindValue(":login", log);
        query.exec();

        query.clear();
        return "true";
    }
     QByteArray check_role(QString log){
        QSqlQuery query;
        query.prepare("SELECT role FROM user where log=:log");
        query.bindValue(":log", log);
        query.exec();
        query.first();
        QString value = query.value(0).toString();
        qDebug() << value;
        if(value=="1"){
            return "role_teacher";
        }else{
            return "role_student";
        }
     }
     QByteArray select_student(){
         QSqlQuery query;
         QString logs;
         query.prepare("SELECT * FROM user where role='0'");
         query.exec();
         int fieldNo = query.record().indexOf("log");
         while (query.next()) {
             QString log = query.value(fieldNo).toString();
             logs += log + "&";
             qDebug()<<log;
         }
         return logs.toUtf8();
     }

};


#endif

