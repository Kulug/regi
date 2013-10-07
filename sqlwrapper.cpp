#include "sqlwrapper.h"

sqlWrapper::sqlWrapper(QObject *parent) :
    QObject(parent)
{
    Sql = new sql();
    qry = new QSqlQuery();
}

void sqlWrapper::qryPrepare(QString query, QMap *fields)
{
    qry->prepare(query);
    for(int i = 0 ; i < fields->count() ; i++)
    {
        qry->bindValue(i , fields->value(i));
    }
}
