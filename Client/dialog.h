#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>
#include <QTextCodec>
#include <QDesktopWidget>

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
    QTcpSocket *tcp;                                //数据连接
    QString sRed;
    void getMsg(char *p);
    //query
    //revquery
    void ViewOnTB2(char *p);
    //orddish
    struct node
    {
        int flag;//是否是第一次点菜
        int top;//顶层记录
        int dish[100];
    }t[20];
    //service
    void ViewOnTB3(char *p);

private slots:
    //socket
    void on_pBConn_clicked();                       //连接按钮
    void onError(QAbstractSocket::SocketError);     //当tcp出现错误时
    void onConn();                                  //当连接建立成功时
    void onData();                                  //当tcp收到数据时
    void on_pBSend_clicked();                       //发送按钮
    void on_pBAbort_clicked();
    //query
    void on_quecookButton_clicked();
    void on_quedishButton_clicked();
    void on_squecookButton_clicked();
    void on_squedishButton_clicked();
    //orderpart
    void on_tabidButton_clicked();
    void on_addButton_clicked();
    void on_delButton_clicked();
    void on_ordButton_clicked();
    //service
    void on_callButton_clicked();
    void on_callsevButton_clicked();
    void on_decButton_clicked();
    void on_getButton_clicked();
    void on_monButton_clicked();
    void on_monButton2_clicked();
    //enable
    void EnableSendButton(QString);
};

#endif // DIALOG_H
