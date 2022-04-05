#ifndef SQLDATABASE_H
#define SQLDATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class SqlDataBase
{
public:
    SqlDataBase();
    ~SqlDataBase();

private:
    QSqlDatabase db;
    QSqlQuery *pSqlQuery;
};

#endif // SQLDATABASE_H
