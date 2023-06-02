#ifndef FUNCTIONSFORSERVER_H
#define FUNCTIONSFORSERVER_H

#include "db.h"

#include <QString>
#include <QStringList>
#include <QDebug>

QByteArray parsing(QString data_from_client, int sock_desc);
//inline static QString login;
QByteArray auth(QString login, QString pass);
QByteArray reg(QString login, QString pass, QString mail, int sock_desc);
QByteArray check_ans(QString numb, QString ans, int sock_desc);
QByteArray look_stat(int sock_desc);
QByteArray look_stat1(int sock_desc);
QByteArray look_stat2(int sock_desc);
QByteArray look_stat3(int sock_desc);
QByteArray change_sock_desc(QString login, int sock_desc);
QByteArray del_status(int sock_desc);
#endif // FUNCTIONSFORSERVER_H
