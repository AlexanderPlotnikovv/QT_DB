#include <QCoreApplication>
#include <QtSql>
#include <QtNetwork>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSqlDatabase db;
    QTcpSocket s;
    return a.exec();
}
