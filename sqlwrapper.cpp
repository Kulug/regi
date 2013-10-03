#include "sqlwrapper.h"

sqlWrapper::sqlWrapper(QObject *parent) :
    QObject(parent)
{
    Sql = new sql();
    qry = new QSqlQuery();
}


void sqlWrapper::qryPrepare()
{

}
