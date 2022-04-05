#include "SqlDataBase.h"

SqlDataBase::SqlDataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./test.db");

    if(db.open())
        qDebug() << "OPEN DB";
    else
        qDebug() << "NOT OPEN DB";

     pSqlQuery = new QSqlQuery(db);

    qDebug() << pSqlQuery->exec("CREATE TABLE User(Name TEXT, Password TEXT)");

    qDebug() << pSqlQuery->exec("INSERT INTO User(Name, Password) VALUES('escow@mail.ru','123456')");
    qDebug() << pSqlQuery->exec("SELECT Name, Password FROM User");

    while (pSqlQuery->next()) {
         QString name = pSqlQuery->value(0).toString();
         QString password = pSqlQuery->value(1).toString();
         qDebug() << name << password;
       }

    qDebug() << pSqlQuery->exec("DELETE FROM User");
    qDebug() << "end";
}

SqlDataBase::~SqlDataBase()
{
    delete pSqlQuery;
}
