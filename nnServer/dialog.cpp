#include "dialog.h"
#include "ui_dialog.h"
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QTextCodec>
#include <QDebug>
#include <QMessageBox>
#include <QTableView>
#include <cstring>
#include <cctype>
#define MAXTABLE 10

using namespace std;


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    //some init
    ui->setupUi(this);
    totalpeople=0;
    totalmoney=0;
    this->setFixedSize(this->width(),this->height());
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    db=new QSqlDatabase(QSqlDatabase::addDatabase("QSQLITE"));
    db->setDatabaseName("data");
    db->setHostName("127.0.0.1");
    if(!db->open())
    {
        qDebug()<<db->lastError().text();
        return;
    }
    QSqlQuery query(*db);
    //socket
    tcp=NULL;
    //sql for dish
    query.exec("create table dish (id int primary key,name vchar,time vchar,wel vchar)");
    //sql for cook
    query.exec("create table cook (id int primary key, name vchar,exp vchar,good vchar,wel vchar)");
    //sql for tab
    query.exec("create table tab (id int primary key,peo vchar,money vchar,dish vchar)");
    query.exec("insert into tab values (1,'0','0','')");
    query.exec("insert into tab values (2,'0','0','')");
    query.exec("insert into tab values (3,'0','0','')");
    query.exec("insert into tab values (4,'0','0','')");
    query.exec("insert into tab values (5,'0','0','')");
    query.exec("insert into tab values (6,'0','0','')");
    query.exec("insert into tab values (7,'0','0','')");
    query.exec("insert into tab values (8,'0','0','')");
    query.exec("insert into tab values (9,'0','0','')");
    query.exec("insert into tab values (10,'0','0','')");
    query.exec("insert into tab values (11,'0','0','')");
    query.exec("insert into tab values (12,'0','0','')");
    query.exec("insert into tab values (13,'0','0','')");
    query.exec("insert into tab values (14,'0','0','')");
    query.exec("insert into tab values (15,'0','0','')");
    query.exec("insert into tab values (16,'0','0','')");
    QPalette myPalette;
    //this
    this->setAutoFillBackground(true);
    myPalette.setBrush(this->backgroundRole(), QBrush(QPixmap("./background/1.jpg")));
    this->setPalette(myPalette);
    //tab1添加图片
    ui->tab1->setAutoFillBackground(true);
    myPalette.setBrush(ui->tab1->backgroundRole(), QBrush(QPixmap("./background/1.png")));
    ui->tab1->setPalette(myPalette);
    //tab2
    ui->tab2->setAutoFillBackground(true);
    myPalette.setBrush(ui->tab2->backgroundRole(), QBrush(QPixmap("./background/3.png")));
    ui->tab2->setPalette(myPalette);
    //tab3
    ui->tab3->setAutoFillBackground(true);
    myPalette.setBrush(ui->tab3->backgroundRole(), QBrush(QPixmap("./background/2.png")));
    ui->tab3->setPalette(myPalette);
    //tab4
    ui->tab4->setAutoFillBackground(true);
    myPalette.setBrush(ui->tab4->backgroundRole(), QBrush(QPixmap("./background/2.png")));
    ui->tab4->setPalette(myPalette);
    //tab5
    ui->tab5->setAutoFillBackground(true);
    myPalette.setBrush(ui->tab5->backgroundRole(), QBrush(QPixmap("./background/4.png")));
    ui->tab5->setPalette(myPalette);
    //icon
    ui->pBBind->setIcon(QPixmap("./icon/6.png"));
    ui->pBSend->setIcon(QPixmap("./icon/5.png"));
    ui->freshButton->setIcon(QPixmap("./icon/9.png"));
    ui->insertButton->setIcon(QPixmap("./icon/8.png"));
    ui->delButton->setIcon(QPixmap("./icon/7.png"));
    ui->queButton->setIcon(QPixmap("./icon/4.png"));
    ui->freshButton2->setIcon(QPixmap("./icon/9.png"));
    ui->insertButton2->setIcon(QPixmap("./icon/8.png"));
    ui->delButton2->setIcon(QPixmap("./icon/7.png"));
    ui->queButton2->setIcon(QPixmap("./icon/4.png"));
    ui->freshButton3->setIcon(QPixmap("./icon/9.png"));
    ui->todayButton->setIcon(QPixmap("./icon/3.png"));
    //设置部分字体为白色
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::white);
    ui->labelwel->setPalette(pa);
    ui->uselabel->setPalette(pa);
    ui->label1->setPalette(pa);
    ui->label2->setPalette(pa);
    ui->label3->setPalette(pa);
    ui->blesslabel->setPalette(pa);
}

Dialog::~Dialog()
{
    delete ui;
}

/*
 *socket part
 */

void Dialog::on_pBBind_clicked()//监听函数
{
    ui->pBSend->setEnabled(false);
    if(tcp)
    {
        tcp->abort();
        tcp=NULL;
        Stcp=NULL;
    }
    if(Stcp)
    {
        Stcp=NULL;
    }
    Stcp=new QTcpServer(this);
    connect(Stcp,SIGNAL(newConnection()),this,SLOT(newConn()));
    Stcp->listen(QHostAddress::Any,ui->lEPort->text().toInt());
    if(flag)
        ui->textBrowser->append("对方已经断开连接，继续监听\n监听端口"+ui->lEPort->text()+"的信息中....");
    else ui->textBrowser->append("监听端口"+ui->lEPort->text()+"的信息中....");
}
void Dialog::newConn()
{
    ui->pBSend->setEnabled(true);
    tcp=Stcp->nextPendingConnection();
    connect(tcp,SIGNAL(readyRead()),this,SLOT(onData()));
    connect(tcp,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(onError(QAbstractSocket::SocketError)));
    ui->textBrowser->append("一个客户端连接"+tcp->peerAddress().toString());
    flag=1;
    Stcp->close();
}

void Dialog::onData()//以下为将各种不同的消息分开处理
{
    QByteArray data=tcp->readAll();
   // ui->textBrowser->append(sRed.arg(tr("&lt;&lt;收到消息:"))+QString(data));
    char *ch;
    ch=data.data();
    if(strstr(ch,"chat:"))
    {
        ch+=5;
        getMsg(ch);
    }
    else if(strstr(ch,"queryallcook:"))    QueryAllCook();
    else if(strstr(ch,"queryalldish:"))    QueryAllDish();
    else if(strstr(ch,"querycook:"))
    {
        ch+=strlen("querycook:");
        QueryCook(ch);
    }
    else if(strstr(ch,"querydish:"))
    {
        ch+=strlen("querydish:");
        QueryDish(ch);
    }
    else if(strstr(ch,"ordtable:"))
    {
        ch+=strlen("ordtable:");
        OrdTable(ch);
    }
    else if(strstr(ch,"order:"))
    {
        ch+=strlen("order:");
        OrdDish(ch);
    }
    else if(strstr(ch,"call:"))
    {
        ch+=strlen("call:");
        QMessageBox::information(this,tr("urgent"),tr(ch));
    }
    else if(strstr(ch,"dec:"))
    {
        ch+=4;
        delDish(ch,1);
    }
    else if(strstr(ch,"get:"))
    {
        ch+=4;
        delDish(ch,0);
    }
    else if(strstr(ch,"mon:"))
    {
        ch+=4;
        Bill(ch);
    }
    else if(strstr(ch,"mon2:"))
    {
        ch+=5;
        Bill2(ch);
    }
    else getMsg(ch);
}
void Dialog::on_pBSend_clicked()//发送消息
{
    QByteArray data;
    data.append(ui->lEMsg->text());
    ui->textBrowser->append(">>发送消息："+QString(data));
    char st[100]="chat:";
    char *ch=data.data();
    strcat(st,ch);
    data=QByteArray(st);
    tcp->write(data);
}
void Dialog::onError(QAbstractSocket::SocketError s)
{
    ui->textBrowser->append("连接错误"+tcp->errorString());
    ui->pBSend->setEnabled(false);
    on_pBBind_clicked();
}

void Dialog::getMsg(char *p)
{
    ui->textBrowser->append(">>收到消息："+QString(p));
}

/*
 *sql for dish
 */
void Dialog::on_freshButton_clicked()//刷新
{
     QSqlQueryModel *model = new QSqlQueryModel;
     model->setQuery("select * from dish");
     model->setHeaderData(0, Qt::Horizontal, tr("菜品编号"));
     model->setHeaderData(1, Qt::Horizontal, tr("菜品名称"));
     model->setHeaderData(2, Qt::Horizontal, tr("做菜时间"));
     model->setHeaderData(3, Qt::Horizontal, tr("价格"));
     ui->view->setModel(model);
     ui->view->show();
}

void Dialog::on_insertButton_clicked()//增加记录
{
   QSqlQuery query(*db);
   query.prepare(QString("INSERT INTO dish (id,name,time,wel) VALUES (:id,:name,:time,:wel)"));
   query.bindValue(":id",ui->idEdit->text().toInt());
   query.bindValue(":name",ui->nameEdit->text());
   query.bindValue(":time",ui->timeEdit->text());
   query.bindValue(":wel",ui->welEdit->text());
   query.exec();
   on_freshButton_clicked();
}

void Dialog::on_delButton_clicked()//删除操作
{
    QSqlQuery query(*db);
    query.prepare(QString("DELETE FROM dish WHERE id=:id"));
    query.bindValue(":id",ui->delEdit->text().toInt());
    query.exec();
    on_freshButton_clicked();
}

void Dialog::on_queButton_clicked()//查询菜品
{
    QSqlQuery query(*db);
    query.prepare(QString("SELECT * FROM dish WHERE name=:name"));
    query.bindValue(":name",ui->queEdit->text());
    query.exec();
    int flag=0;
    while (query.next ())
    {
        flag=1;
        QString idd = query.value(0).toString();
        QString  namee = query.value(1).toString();
        QString  timee = query.value(2).toString();
        QString  well = query.value(3).toString();
        ui->queBrowser->append("编号："+idd+" 菜名:"+namee+" 做菜时间："+timee+" 价钱："+well);
    }
    if(flag==0)
        ui->queBrowser->append("没有找到相关记录！！");
}

/*
 *sql for cook
 */
void Dialog::on_freshButton2_clicked()//刷新
{
     QSqlQueryModel *model2 = new QSqlQueryModel;
     model2->setQuery("select * from cook");
     model2->setHeaderData(0, Qt::Horizontal, tr("厨师编号"));
     model2->setHeaderData(1, Qt::Horizontal, tr("厨师名字"));
     model2->setHeaderData(2, Qt::Horizontal, tr("经验"));
     model2->setHeaderData(3, Qt::Horizontal, tr("擅长菜式"));
     model2->setHeaderData(4, Qt::Horizontal, tr("好评度"));
     ui->view2->setModel(model2);
     ui->view2->show();
}

void Dialog::on_insertButton2_clicked()//增加
{
   QSqlQuery query(*db);
   query.prepare(QString("INSERT INTO cook (id,name,exp,good,wel) VALUES (:id,:name,:exp,:good,:wel)"));
   query.bindValue(":id",ui->idEdit2->text().toInt());
   query.bindValue(":name",ui->nameEdit2->text());
   query.bindValue(":exp",ui->expEdit->text());
   query.bindValue(":good",ui->goodEdit->text());
   query.bindValue(":wel",ui->welEdit2->text());
   query.exec();
   on_freshButton2_clicked();
}

void Dialog::on_delButton2_clicked()//删除操作
{
    QSqlQuery query(*db);
    query.prepare(QString("DELETE FROM cook WHERE id=:id"));
    query.bindValue(":id",ui->delEdit2->text());
    query.exec();
    on_freshButton2_clicked();
}

void Dialog::on_queButton2_clicked()//查询单个厨师
{
    QSqlQuery query(*db);
    query.prepare(QString("SELECT * FROM cook WHERE name=:name"));
    query.bindValue(":name",ui->queEdit2->text());
    query.exec();
    int flag=0;
    while (query.next ())
    {
        flag=1;
        QString idd = query.value(0).toString();
        QString namee = query.value(1).toString();
        QString expp = query.value(2).toString();
        QString goodd = query.value(3).toString();
        QString well = query.value(4).toString();
        ui->textBrowser3->append("编号："+idd+" 名字："+namee+" 经验："+expp+" 擅长菜式："+goodd+" 好评度："+well);
    }
    if(flag==0)
        ui->textBrowser3->append("没有找到相关记录！！");
}
/*
 *sql for tab
 */
void Dialog::on_freshButton3_clicked()//刷新
{
     QSqlQueryModel *model3 = new QSqlQueryModel;
     model3->setQuery("select * from tab");
     model3->setHeaderData(0, Qt::Horizontal, tr("桌子编号"));
     model3->setHeaderData(1, Qt::Horizontal, tr("人数"));
     model3->setHeaderData(2, Qt::Horizontal, tr("账单"));
     model3->setHeaderData(3, Qt::Horizontal, tr("菜品"));
     ui->view3->setModel(model3);
     ui->view3->show();
 //   QMessageBox::information(this,tr("conguratulations!"),tr("add!!!"));
}
/*
 *query service
 */
void Dialog::QueryAllCook()//客户端查询所有厨师
{
    QSqlQuery query(*db);
    query.prepare(QString("SELECT * FROM cook"));
    query.exec();
    QString qst="queryallcook:";
    while(query.next())
    {
        QString idd = query.value(0).toString();
        QString namee = query.value(1).toString();
        QString expp = query.value(2).toString();
        QString goodd = query.value(3).toString();
        QString well = query.value(4).toString();
        qst=qst+"编号："+idd+" 名字："+namee+" 经验："+expp+" 擅长菜式："+goodd+" 好评度："+well+"\n";
    }
    QByteArray data;
    data=qst.toAscii();
    tcp->write(data);
}

void Dialog::QueryAllDish()//客户端查询所有菜品
{
    QSqlQuery query(*db);
    query.prepare(QString("SELECT * FROM dish"));
    query.exec();
    QString qst="queryalldish:";
    while (query.next ())
    {
        QString idd = query.value(0).toString();
        QString  namee = query.value(1).toString();
        QString  timee = query.value(2).toString();
        QString  well = query.value(3).toString();
        qst=qst+"编号："+idd+" 菜名:"+namee+" 做菜时间："+timee+" 价格："+well+"\n";
    }
    QByteArray data;
    data=qst.toAscii();
 //   qDebug()<<qst;
    tcp->write(data);
}

void Dialog::QueryCook(char *p)//客户端查询单个厨师
{
    QSqlQuery query(*db);
    query.prepare(QString("SELECT * FROM cook WHERE name=:name"));
    query.bindValue(":name",QString(p));
    query.exec();
    QString qst="querycook:";
    while(query.next())
    {
        QString idd = query.value(0).toString();
        QString namee = query.value(1).toString();
        QString expp = query.value(2).toString();
        QString goodd = query.value(3).toString();
        QString well = query.value(4).toString();
        qst=qst+"编号："+idd+" 名字："+namee+" 经验："+expp+" 擅长菜式："+goodd+" 好评度："+well+"\n";

    }
    QByteArray data;
    data=qst.toAscii();
    tcp->write(data);
}

void Dialog::QueryDish(char *p)//客户端查询单个菜品
{
    QSqlQuery query(*db);
    query.prepare(QString("SELECT * FROM dish WHERE name=:name"));
    query.bindValue(":name",QString(p));
    query.exec();
    QString qst="querydish:";
    while (query.next ())
    {
        QString idd = query.value(0).toString();
        QString  namee = query.value(1).toString();
        QString  timee = query.value(2).toString();
        QString  well = query.value(3).toString();
        qst=qst+"编号："+idd+" 菜名:"+namee+" 做菜时间："+timee+" 价格："+well+"\n";
    }
    QByteArray data;
    data=qst.toAscii();
    tcp->write(data);
}

//order
int Dialog::FindTable(int num)
{
    QSqlQuery query(*db);
    query.prepare(QString("SELECT * FROM tab"));
    query.exec();
    int flag=-1;
    int idd=-1,peonum=-1;
    while(query.next())
    {
        idd = query.value(0).toInt();
        peonum=query.value(1).toInt();
        int compare=num+peonum;//如果该桌已有的人数小于当前申请的人数，就加入
        if(compare<=MAXTABLE)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
        return idd;
    else return -1;
}

void Dialog::ChangeTablePeo(int peonum,int indx)//将数据库中原有的数据改掉
{
    QSqlQuery query(*db);
    query.prepare(QString("SELECT * FROM tab WHERE id=:id"));
    query.bindValue(":id",indx);
    query.exec();
    int mon;
    QString dishlist;
    //拿出记录
    query.next();
    peonum=peonum+query.value(1).toInt();
    dishlist=query.value(3).toString();
    mon=query.value(2).toInt();
    //删除
    query.prepare(QString("DELETE  FROM tab WHERE id=:id"));
    query.bindValue(":id",indx);
    query.exec();
    //插入
    query.prepare(QString("INSERT INTO tab (id,peo,money,dish) VALUES (:id,:peo,:money,:dish)"));
    query.bindValue(":id",indx);
    query.bindValue(":peo",QString::number(peonum));
    query.bindValue(":money",QString::number(mon));
    query.bindValue(":dish",dishlist);
    query.exec();
}

void Dialog::OrdTable(char *p)
{
    int i,num=0;
    for(i=0;isdigit(p[i]);i++)
        num=num*10+p[i]-48;
    QString qst="ordtable:ss您已经成功申请桌号：";
    int flag=0;
    QByteArray data;
    totalpeople+=num;
    while(num>0)//当人数大于桌子容纳量的时候循环地找桌子
    {
        if(num>=MAXTABLE)
        {
            int findtable=FindTable(MAXTABLE);//找一个空桌
            if(findtable==-1)//坐不下
            {
                flag=-1;
                break;
            }
            ChangeTablePeo(MAXTABLE,findtable);//更改信息
            qst=qst+QString::number(findtable)+" ";
        }
        else
        {
            int findtable=FindTable(num);//找任意一个坐得下的桌子
            if(findtable==-1)//做不下
            {
                flag=-1;
                break;
            }
            ChangeTablePeo(num,findtable);
            qst=qst+QString::number(findtable)+" ";
        }
        num-=MAXTABLE;
    }
    if(flag==-1)
        qst=qst+"error";
    data=qst.toAscii();
    tcp->write(data);
}

void Dialog::OrdDish(char *p)//将顾客的菜单放入数据库中
{
    int tableid=atoi(p);
    char *dishchain=strstr(p,",");
    dishchain++;
    int money=0;
    for(int i=0;;i++)
    {
        p=strstr(p,",");
        if(p==NULL)
            break;
        p++;
        int dishid=atoi(p);
        money+=QueryDishMoney(dishid);
    }
    //记录原有记录
    QSqlQuery query(*db);
    query.prepare(QString("SELECT *FROM tab WHERE id=:id"));
    query.bindValue(":id",tableid);
    query.exec();
    query.next();
    money+=query.value(2).toInt();
    int peonum=query.value(1).toInt();
    QString dishlist=query.value(3).toString();
    //删除记录
    query.prepare(QString("DELETE FROM tab WHERE id=:id"));
    query.bindValue(":id",tableid);
    query.exec();
    //修改后加入记录
    if(dishlist=="")    dishlist=QString(dishchain);
    else dishlist=dishlist+","+QString(dishchain);
    query.prepare(QString("INSERT INTO tab (id,peo,money,dish) VALUES (:id,:peo,:money,:dish)"));
    query.bindValue(":id",tableid);
    query.bindValue(":peo",QString::number(peonum));
    query.bindValue(":money",QString::number(money));
    query.bindValue(":dish",dishlist);
    query.exec();
}

int Dialog::QueryDishMoney(int dishid)//查询数据库中某菜品的价钱
{
    QSqlQuery query(*db);
    query.prepare(QString("SELECT * FROM dish WHERE id=:id"));
    query.bindValue(":id",dishid);
    query.exec();
    query.next();
    int mon=query.value(3).toInt();
    return mon;
}

//service

void Dialog::delDish(char *p, int a)//退菜请求
{
    int tableid=atoi(p);
    p=strstr(p,",");
    p++;
    int dishid=atoi(p);
    int mon=QueryDishMoney(dishid);
    QSqlQuery query(*db);
    //记录原有记录
    query.prepare(QString("SELECT *FROM tab WHERE id=:id"));
    query.bindValue(":id",tableid);
    query.exec();
    query.next();
    int monn,peonum;
    QString dishlist;
    monn=query.value(2).toInt();
    peonum=query.value(1).toInt();
    dishlist=query.value(3).toString();
    qDebug()<<"test"<<tableid<<"peonum"<<peonum<<"money"<<monn<<"dishlist"<<dishlist;
    //删除记录
    query.prepare(QString("DELETE FROM tab WHERE id=:id"));
    query.bindValue(":id",tableid);
    query.exec();
    //修改dishlist
    dishlist=","+dishlist;
    char *q,ch[110];
    q=dishlist.toLatin1().data();
    strcpy(ch,q);
    q=ch;
    int d[20];
    int i;
    for(i=0;;i++)
    {
        qDebug()<<"infor"<<QString(q);
        d[i]=0;
        q=strstr(q,",");
        if(q==NULL)
            break;
        q++;
        int tempdishid=atoi(q);
        if(tempdishid!=dishid)
            d[i]=tempdishid;
        else if(a) monn-=mon;
    }
    i--;
    dishlist="";
    for(int j=0;j<=i;j++)
    {
        if(d[j])
        {
            if(dishlist=="")    dishlist=QString::number(d[j]);
            else dishlist=dishlist+","+QString::number(d[j]);
        }
        qDebug()<<"d[j]"<<j<<" "<<d[j];
    }
    qDebug()<<"dishlist"<<dishlist;
    qDebug()<<"lalala"<<tableid<<"kakaa"<<peonum<<"lalaal"<<monn<<"lalala"<<dishlist;
    //增加记录
    query.prepare(QString("INSERT INTO tab (id,peo,money,dish) VALUES (:id,:peo,:money,:dish)"));
    query.bindValue(":id",tableid);
    query.bindValue(":peo",QString::number(peonum));
    query.bindValue(":money",QString::number(monn));
    query.bindValue(":dish",dishlist);
    query.exec();
}

void Dialog::Bill(char *p)//付款
{
    int tableid=atoi(p);
    p=strstr(p,",");
    p++;
    int money=atoi(p);
    //
    QSqlQuery query(*db);
    query.prepare(QString("SELECT *FROM tab WHERE id=:id"));
    query.bindValue(":id",tableid);
    query.exec();
    query.next();
    int monn,peonum;
    QString dishlist;
    monn=query.value(2).toInt();
    peonum=query.value(1).toInt();
    dishlist=query.value(3).toString();
    if(money>=monn)//如果全部付款当成是全桌人都离开了
    {
        totalmoney+=monn;
        QString qst="service:您好！找零"+QString::number(money-monn)+"元。\n欢迎下次光临！";
        QByteArray data=qst.toAscii();
        tcp->write(data);
        monn=0;
        peonum=0;
        dishlist="";
    }
    else//如果部分付款当作并桌处理
    {
        QString qst="service:您已经成功支付一部分款项！";
        QByteArray data=qst.toAscii();
        tcp->write(data);
        monn-=money;
        totalmoney+=money;
    }
    //
    query.prepare(QString("DELETE FROM tab WHERE id=:id"));
    query.bindValue(":id",tableid);
    query.exec();
    query.prepare(QString("INSERT INTO tab (id,peo,money,dish) VALUES (:id,:peo,:money,:dish)"));
    query.bindValue(":id",tableid);
    query.bindValue(":peo",QString::number(peonum));
    query.bindValue(":money",QString::number(monn));
    query.bindValue(":dish",dishlist);
    query.exec();
}

void Dialog::Bill2(char *p)//代付
{
    qDebug()<<p;
    int tableid1=atoi(p);
    p=strstr(p,",");
    p++;
    int tableid2=atoi(p);
    QString qst;
    QByteArray data;
    QSqlQuery query(*db);
    query.prepare(QString("SELECT *FROM tab WHERE id=:id"));
    query.bindValue(":id",tableid2);
    query.exec();
    query.next();
    int peo=query.value(1).toInt();
    if(peo==0)
    {
        qst="mon2:error";
        data=qst.toAscii();
        tcp->write(data);
        return;
    }
    else
    {
        qst="mon2:success";
        data=qst.toAscii();
        tcp->write(data);
    }
    //查询1的钱数
    query.prepare(QString("SELECT *FROM tab WHERE id=:id"));
    query.bindValue(":id",tableid1);
    query.exec();
    query.next();
    int plus=query.value(2).toInt();
    //删除1
    query.prepare(QString("DELETE FROM tab WHERE id=:id"));
    query.bindValue(":id",tableid1);
    query.exec();
    //重新添加1的空记录
    query.prepare(QString("INSERT INTO tab (id,peo,money,dish) VALUES (:id,:peo,:money,:dish)"));
    query.bindValue(":id",tableid1);
    query.bindValue(":peo",QString::number(0));
    query.bindValue(":money",QString::number(0));
    query.bindValue(":dish","");
    query.exec();
    //记录2的旧记录
    query.prepare(QString("SELECT *FROM tab WHERE id=:id"));
    query.bindValue(":id",tableid2);
    query.exec();
    query.next();
    int monn,peonum;
    QString dishlist;
    monn=query.value(2).toInt();
    peonum=query.value(1).toInt();
    dishlist=query.value(3).toString();
    //删除2的记录
    query.prepare(QString("DELETE FROM tab WHERE id=:id"));
    query.bindValue(":id",tableid2);
    query.exec();
    //添加
    query.prepare(QString("INSERT INTO tab (id,peo,money,dish) VALUES (:id,:peo,:money,:dish)"));
    query.bindValue(":id",tableid2);
    query.bindValue(":peo",QString::number(peonum));
    query.bindValue(":money",QString::number(monn+plus));
    query.bindValue(":dish",dishlist);
    query.exec();
}

void Dialog::on_todayButton_clicked()
{
    ui->textBrowser2->append("今日客流量："+QString::number(totalpeople)+"\n今日销售额："+QString::number(totalmoney)+"\n人均消费："+QString::number((double)totalmoney/totalpeople));
}
