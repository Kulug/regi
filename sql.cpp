#include "sql.h"

sql::sql(QObject *parent) :
    QObject(parent)
{
    this->db_conn();
}

void sql::db_conn()
{
    db = new QSqlDatabase();
    db->addDatabase("QSQLITE");
    db->setDatabaseName("/home/rain/Documents/Sj/Projects/KPG/register/register");
    if(db->open()){
        qDebug() << "DB opened";
    }
    else{
        qDebug() << "error can not open DB";
        exit(1);
    }
}

void sql::sql_exec(QSqlQuery *qry, const QSqlResult *res)
{
    if(qry->exec()){
        res = qry->result();
    }
    else {
        qDebug() << "Unable to execute query";
    }
}

void sql::sql_exec(QSqlQuery *qry)
{
    if(qry->exec()){

    }
    else {
        qDebug() << "Unable to execute query";
    }
}

sql :: ~sql (){
    db->close();
}
