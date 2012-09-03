#include "dialog.h"
#include "ui_dialog.h"
#include <QTextCodec>
#include <QSound>
#define MARK 12345

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));//修改编码方式使中文能够正常显示
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    tcp=NULL;
    QPalette myPalette;//以下为将四个tab换上背景图片
    //this
    this->setAutoFillBackground(true);
    myPalette.setBrush(this->backgroundRole(), QBrush(QPixmap("./background/1.jpg")));
    this->setPalette(myPalette);
    //tab0
    ui->tab0->setAutoFillBackground(true);
    myPalette.setBrush(ui->tab0->backgroundRole(), QBrush(QPixmap("./background/1.png")));
    ui->tab0->setPalette(myPalette);
    //tab1添加图片
    ui->tab1->setAutoFillBackground(true);
    myPalette.setBrush(ui->tab1->backgroundRole(), QBrush(QPixmap("./background/2.png")));
    ui->tab1->setPalette(myPalette);
    //tab2
    ui->tab2->setAutoFillBackground(true);
    myPalette.setBrush(ui->tab2->backgroundRole(), QBrush(QPixmap("./background/3.png")));
    ui->tab2->setPalette(myPalette);
    //tab3
    ui->tab3->setAutoFillBackground(true);
    myPalette.setBrush(ui->tab3->backgroundRole(), QBrush(QPixmap("./background/4.png")));
    ui->tab3->setPalette(myPalette);
    //为各个按钮设置图标
    ui->tabidButton->setIcon(QPixmap("./icon/1.png"));
    ui->pBConn->setIcon(QPixmap("./icon/2.png"));
    ui->pBAbort->setIcon(QPixmap("./icon/3.png"));
    ui->pBSend->setIcon(QPixmap("./icon/4.png"));
    ui->quecookButton->setIcon(QPixmap("./icon/5.png"));
    ui->quedishButton->setIcon(QPixmap("./icon/6.png"));
    ui->squecookButton->setIcon(QPixmap("./icon/7.png"));
    ui->squedishButton->setIcon(QPixmap("./icon/8.png"));
    ui->addButton->setIcon(QPixmap("./icon/18.png"));
    ui->delButton->setIcon(QPixmap("./icon/21.png"));
    ui->ordButton->setIcon(QPixmap("./icon/11.png"));
    ui->monButton->setIcon(QPixmap("./icon/12.png"));
    ui->monButton2->setIcon(QPixmap("./icon/13.png"));
    ui->callButton->setIcon(QPixmap("./icon/14.png"));
    ui->decButton->setIcon(QPixmap("./icon/15.png"));
    ui->getButton->setIcon(QPixmap("./icon/16.png"));
    ui->callsevButton->setIcon(QPixmap("./icon/17.png"));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pBConn_clicked()
{
    if(tcp)
    {
        delete tcp;
    }
    tcp=new QTcpSocket(this);
    tcp->connectToHost(QHostAddress(ui->lEIP->text()),ui->lEPort->text().toLong());//连接到主机IP，端口号
    connect(tcp,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(onError(QAbstractSocket::SocketError)));
    connect(tcp,SIGNAL(connected()),this,SLOT(onConn()));
    connect(tcp,SIGNAL(readyRead()),this,SLOT(onData()));
    ui->pBConn->setEnabled(false);
    ui->pBAbort->setEnabled(true);
}
void Dialog::onData()
{
    QByteArray data=tcp->readAll();
 //   ui->textBrowser->append(sRed.arg(tr("&lt;&lt;收到消息:"))+QString(data));
    char *ch;
    ch=data.data();
    if(strstr(ch,"chat:"))//以下为将各种不同的消息分开处理
    {
        ch+=5;
        getMsg(ch);
    }
    else if(strstr(ch,"queryallcook:"))
    {
        ch+=strlen("queryallcook:");
        ViewOnTB2(ch);
    }
    else if(strstr(ch,"queryalldish:"))
    {
        ch+=strlen("queryalldish:");
        ViewOnTB2(ch);
    }
    else if(strstr(ch,"querycook"))
    {
        ch+=strlen("querycook:");
        ViewOnTB2(ch);
    }
    else if(strstr(ch,"querydish"))
    {
        ch+=strlen("querydish:");
        ViewOnTB2(ch);
    }
    else if(strstr(ch,"ordtable:"))
    {
        ch+=strlen("ordtable：");
        if(strstr(ch,"error"))
            ViewOnTB2("可用桌位不足，您下次再来吧～\n");
        else ViewOnTB2(ch);
    }
    else if(strstr(ch,"service:"))
    {
        ch+=strlen("service:");
        ViewOnTB3(ch);
    }
    else if(strstr(ch,"mon2:e"))    ViewOnTB3("您申请代付的桌位没有人，谢谢！");
    else if(strstr(ch,"mon2:s"))    ViewOnTB3("成功代付！");
    else getMsg(ch);
}

void Dialog::getMsg(char *p)//聊天界面
{
    ui->textBrowser->append(">>收到消息："+QString(p));
}

void Dialog::on_pBSend_clicked()
{
    QByteArray data;
    data.append(ui->lEMsg->text());
    ui->textBrowser->append(">>发送消息："+QString(data));//将发送的消息显示在textBrowser控件中
    char st[100]="chat:";
    char *ch=data.data();
    strcat(st,ch);
    data=QByteArray(st);
    tcp->write(data);

}
void Dialog::onError(QAbstractSocket::SocketError s)
{
  //  ui->textBrowser->append(sRed.arg(tr("连接错误,")+tcp->errorString()));
    ui->textBrowser->append("连接错误！"+tcp->errorString());
    ui->pBConn->setEnabled(true);
    ui->pBSend->setEnabled(false);
    ui->pBAbort->setEnabled(false);
    tcp=NULL;
}
void Dialog::onConn()
{
    ui->textBrowser->append("成功连接到服务器"+ui->lEIP->text()+tr(":")+ui->lEPort->text());
}

void Dialog::on_pBAbort_clicked()
{
    tcp->abort();
    delete tcp;
    tcp=NULL;
    ui->textBrowser->append("您手动断开了连接");
    ui->pBConn->setEnabled(true);
    ui->pBSend->setEnabled(false);
    ui->pBAbort->setEnabled(false);

}

//query
void Dialog::on_quecookButton_clicked()//查询所有厨师的信息
{
    if(tcp==NULL)
    {
        ViewOnTB2("请先在聊天界面连接到服务器。");
        return;
    }
    char ch[100]="queryallcook:";
    QByteArray data;
    data=QByteArray(ch);
    tcp->write(data);
}

void Dialog::on_quedishButton_clicked()//查询所有菜品信息
{
    if(tcp==NULL)
    {
        ViewOnTB2("请先在聊天界面连接到服务器。");
        return;
    }
    char ch[100]="queryalldish:";
    QByteArray data;
    data=QByteArray(ch);
    tcp->write(data);
}

void Dialog::on_squecookButton_clicked()//查询单个厨师信息
{
    if(tcp==NULL)
    {
        ViewOnTB2("请先在聊天界面连接到服务器。");
        return;
    }
    QString st="querycook:";
    QString qst=ui->squecookEdit->text();
    qst=st+qst;
    QByteArray data;
    data=qst.toAscii();
    tcp->write(data);
}

void Dialog::on_squedishButton_clicked()//查询单个菜品信息
{
    if(tcp==NULL)
    {
        ViewOnTB2("请先在聊天界面连接到服务器。");
        return;
    }
    QString st="querydish:";
    QString qst=ui->squedishEdit->text();
    qst=st+qst;
    QByteArray data;
    data=qst.toAscii();
    tcp->write(data);
}

void Dialog::ViewOnTB2(char *p)
{
    ui->textBrowser2->append(QString(p));
}

//order part
void Dialog::on_tabidButton_clicked()//申请桌号
{
    if(tcp==NULL)
    {
        ViewOnTB2("请先在聊天界面连接到服务器。");
        return;
    }
    QString qst="ordtable:";
    qst=qst+ui->peonumEdit->text();
    QByteArray data;
    data=qst.toAscii();
    tcp->write(data);
}

void Dialog::on_addButton_clicked()//添加菜品到本地缓存
{
    int tableid=ui->add1Edit->text().toInt();
    int dishid=ui->add2Edit->text().toInt();
    if(t[tableid].flag!=MARK)
    {
        memset(t[tableid].dish,0,sizeof(t[tableid].dish));
        t[tableid].flag=MARK;
        t[tableid].top=0;
    }
    t[tableid].dish[t[tableid].top]=dishid;//缓存在结构体中
    t[tableid].top++;
    QString qst="成功为桌号为"+QString::number(tableid)+"加入编号为"+QString::number(dishid)+"的菜品";
    ui->textBrowser2->append(qst);
}

void Dialog::on_delButton_clicked()//在本地缓存中删除已点菜品
{
    int tableid=ui->del1Edit->text().toInt();
    int dishid=ui->del2Edit->text().toInt();
    if(t[tableid].flag!=MARK)
        return;
    int i;
    for(i=0;i<t[tableid].top;i++)
    {
        if(t[tableid].dish[i]==dishid)
            t[tableid].dish[i]=0;
    }
    QString qst="桌号"+QString::number(tableid)+"点的编号为"+QString::number(dishid)+"的菜品已经从菜单中删除。";
    ui->textBrowser2->append(qst);
}

void Dialog::on_ordButton_clicked()
{
    if(tcp==NULL)
    {
        ViewOnTB2("请先在聊天界面连接到服务器。");
        return;
    }
    QString qst="order:";
    int tableid=ui->tableEdit->text().toInt();
    qst=qst+QString::number(tableid);
    int i;
    for(i=0;i<t[tableid].top;i++)//将菜单连接成一个字符串发送给服务器端
    {
        int dishid=t[tableid].dish[i];
        if(dishid!=0)
            qst=qst+","+QString::number(dishid);
    }
    memset(t[tableid].dish,0,sizeof(t[tableid].dish));
    t[tableid].top=0;
    t[tableid].flag=MARK+1;
    QByteArray data;
    data=qst.toAscii();
    ViewOnTB2("已经成功下单！");
    tcp->write(data);
}

//service

void Dialog::ViewOnTB3(char *p)
{
    ui->textBrowser3->append(QString(p));
}

void Dialog::on_callButton_clicked()//催菜
{
    if(tcp==NULL)
    {
        ViewOnTB3("请先在聊天界面连接到服务器。");
        return;
    }
    QString qst="call:";
    qst=qst+"桌号为"+ui->calltabEdit->text()+"的顾客催促"+ui->calldishEdit->text()+"菜品！";
    QByteArray data=qst.toAscii();
    tcp->write(data);
    ViewOnTB3("催菜信息已经发送至前台。");
}

void Dialog::on_callsevButton_clicked()//呼叫服务员
{
    if(tcp==NULL)
    {
        ViewOnTB3("请先在聊天界面连接到服务器。");
        return;
    }
    QString qst="call:";
    qst=qst+"桌号为"+ui->callsevEdit->text()+"的顾客呼叫服务员！";
    QByteArray data=qst.toAscii();
    tcp->write(data);
    ViewOnTB3("呼叫服务员信息已经发送至前台。");
}

void Dialog::on_decButton_clicked()//退菜
{
    if(tcp==NULL)
    {
        ViewOnTB3("请先在聊天界面连接到服务器。");
        return;
    }
    QString qst="dec:";
    qst=qst+ui->calltabEdit->text()+","+ui->calldishEdit->text();
    QByteArray data=qst.toAscii();
    tcp->write(data);
    ViewOnTB3("退菜成功！");
}

void Dialog::on_getButton_clicked()//告知前台某菜已上
{
    if(tcp==NULL)
    {
        ViewOnTB3("请先在聊天界面连接到服务器。");
        return;
    }
    QString qst="get:";
    qst=qst+ui->gettabEdit->text()+","+ui->getdishEdit->text();
    QByteArray data=qst.toAscii();
    tcp->write(data);
    ViewOnTB3("已经告知前台。");
}

void Dialog::on_monButton_clicked()//支付
{
    if(tcp==NULL)
    {
        ViewOnTB3("请先在聊天界面连接到服务器。");
        return;
    }
    QString qst="mon:";
    qst+=ui->monEdit1->text()+","+ui->monEdit2->text();//将桌号和支付的钱数用逗号连成字符串发给服务器端
    QByteArray data=qst.toAscii();
    tcp->write(data);
}

void Dialog::on_monButton2_clicked()//申请代付
{
    if(tcp==NULL)
    {
        ViewOnTB3("请先在聊天界面连接到服务器。");
        return;
    }
    QString qst="mon2:";
    qst+=ui->monEdit1->text()+","+ui->monEdit3->text();//将桌号和代付桌号用逗号连成字符串发给服务器端
    QByteArray data=qst.toAscii();
    tcp->write(data);
}
//enable
void Dialog::EnableSendButton(QString text)
{
    ui->pBSend->setEnabled(!text.isEmpty());
}
