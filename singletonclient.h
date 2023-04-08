#ifndef SINGLETONCLIENT_H
#define SINGLETONCLIENT_H
#include <QObject>
#include <QtNetwork>
#include <QTcpSocket>
#include <QDebug>

//Улучшенная реализация
class SingletonClient;

class SingletonClientDestroyer
{
        private:
                SingletonClient * p_instance;
        public:
                ~SingletonClientDestroyer() { delete p_instance;}
                void initialize(SingletonClient * p){p_instance = p;}
};


class SingletonClient: public QObject
{
        Q_OBJECT
        private:
                static SingletonClient * p_instance;
                static SingletonClientDestroyer destroyer;
                QTcpSocket* socket;
        protected:
                explicit SingletonClient();
                SingletonClient(const SingletonClient&) = delete;
                SingletonClient& operator = (SingletonClient &)=delete;
                ~SingletonClient();
                friend class SingletonClientDestroyer;
        public:
                static SingletonClient* getInstance();
                bool sendToServer(QString);
        protected slots:
                void slot_readFromServer();
};
#endif // SINGLETONCLIENT_H
