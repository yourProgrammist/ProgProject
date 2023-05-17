#include "functioforserver.h"
#include <QDebug>



QByteArray reg(QString log, QString pass,QString mail,int desc)
{
    return Db::getInstance()->reg(log,pass,mail,desc);
}


QByteArray auth(QString log, QString pass,int desc)
{
    return Db::getInstance()->auth(log,pass,desc);
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
        QString log, pass;

        if(data_from_client_list.front() == "reg")
        {
            data_from_client_list.pop_front();
            log = data_from_client_list.front();
            data_from_client_list.pop_front();
            pass = data_from_client_list.front();
            return reg(log, pass,data_from_client_list[1],desc);
        }
        if(data_from_client_list.front() == "auth")
        {
            data_from_client_list.pop_front();
            log = data_from_client_list.front();
            data_from_client_list.pop_front();
            pass = data_from_client_list.front();
            return auth(log, pass, desc);
        }
    } else
    {
        return data_from_client.toUtf8();;
    }
}
