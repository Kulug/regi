#ifndef SQLWRAPPER_H
#define SQLWRAPPER_H

#include <QObject>
#include <QtSql/QSqlResult>
#include <QtSql/QSqlQuery>
#include "sql.h"


class sqlWrapper : public QObject
{
    Q_OBJECT

private:

    QSqlQuery *qry;
    sql *Sql;

public:
    explicit sqlWrapper(QObject *parent = 0);
    void listUser(QSqlResult *);
    void listTeam(QSqlResult *);
    void listRole(QSqlResult *);
    void addUser();
    void addTeam();
    void addRole();
    void deleteUser();
    void deleteTeam();
    void deleteRole();
    void editUser();
    void editTeam();
    void editRole();
    void qryPrepare(QString,QMap*);

signals:

public slots:

};

#endif // SQLWRAPPER_H
