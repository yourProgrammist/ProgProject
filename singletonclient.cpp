#include "singletonclient.h"
SingletonClient::SingletonClient()
{
    socket = new QTcpSocket;
    socket->connectToHost("127.0.0.1", 33333);
    connect(socket, &QTcpSocket::readyRead, this, &SingletonClient::slot_readFromServer);

}

SingletonClient * SingletonClient::getInstance(){
    if (!p_instance)
    {
        p_instance = new SingletonClient();
        destroyer.initialize(p_instance);

    }
    return p_instance;
}
SingletonClient::~SingletonClient(){
    socket->close();
}
bool SingletonClient::sendToServer(QString msg){
    if (socket->write(msg.toUtf8()))
        return true;
    else
        return false;
}


//сигнал

void SingletonClient::slot_readFromServer(){
    QString res = "";
    while(socket->bytesAvailable()>0)
    {
        QByteArray array =socket->readAll();
        res.append(array);
    }
    qDebug() << res;
}

SingletonClientDestroyer SingletonClient::destroyer;
SingletonClient * SingletonClient::p_instance;
