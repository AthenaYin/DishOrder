#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtGui>
#include <QWidget>
#include <QDialog>
#include <QMainWindow>
#include <QTcpServer>
#include <QMessageBox>
#include <QTextCodec>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDesktopWidget>
#include <QSqlQuery>

class QSqlDatabase;
class QSqlQueryModel;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
private:
    Ui::Dialog *ui;
    //socket
    QTcpServer *Stcp;                               //监听
    QTcpSocket *tcp;                                //数据连接
    QString sRed;
    int flag=0;
    void getMsg(char *p);
    //sql for dish
    QSqlDatabase *db;
    QSqlQueryModel *model;
    QSqlQueryModel *model2;
    //query
    void QueryAllCook();
    void QueryAllDish();
    void QueryCook(char *p);
    void QueryDish(char *p);
    //ord
    void OrdTable(char *p);
    int FindTable(int num);
    void ChangeTablePeo(int peonum,int indx);
    void OrdDish(char *p);
    int QueryDishMoney(int dishid);
    void delDish(char *p,int a);
    void Bill(char *p);
    void Bill2(char *p);
    //
    int totalpeople;
    int totalmoney;
private slots:
    //socket
    void newConn();                                 //当Stcp有新连接时
    void onData();                                  //当tcp收到新数据时
    void on_pBBind_clicked();                       //开始监听按钮
    void on_pBSend_clicked();                       //发送消息按钮
    void onError(QAbstractSocket::SocketError s);
    //sql for dish
    void on_freshButton_clicked();
    void on_insertButton_clicked();
    void on_delButton_clicked();
    void on_queButton_clicked();
    //sql for cook
    void on_freshButton2_clicked();
    void on_insertButton2_clicked();
    void on_delButton2_clicked();
    void on_queButton2_clicked();
    //sql for tab
    void on_freshButton3_clicked();
    //today
    void on_todayButton_clicked();
};

#endif // DIALOG_H
