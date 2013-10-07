#ifndef SQL_H
#define SQL_H

#include <QObject>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlResult>
#include <QtSql/QSqlDatabase>
#include <QDebug>

class sql : public QObject
{
    Q_OBJECT
private:
    QSqlDatabase *db;
public:
    explicit sql(QObject *parent = 0);
    ~sql();
    void db_conn();
    void sql_exec(QSqlQuery*,const QSqlResult*);
    void sql_exec(QSqlQuery*);

signals:

public slots:

};

#endif // SQL_H
