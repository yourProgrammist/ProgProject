#include <QCoreApplication>
#include <singletonclient.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SingletonClient::getInstance()->sendToServer("auth&pass&login");
    return a.exec();
}
