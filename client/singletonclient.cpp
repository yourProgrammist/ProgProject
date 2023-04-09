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
    ans_from_serv = "Read";
    QByteArray a;
    a+=res.toUtf8();
    socket -> write(a);
    socket -> waitForReadyRead(100);

    return ans_from_serv;
}


//сигнал

void SingletonClient::slot_readFromServer(){
    QString res = "";
    while(socket->bytesAvailable()>0)
    {
        QByteArray array =socket->readAll();
        res.append(array);
    }
    ans_from_serv = res;
}

SingletonClientDestroyer SingletonClient::destroyer;
SingletonClient * SingletonClient::p_instance;
