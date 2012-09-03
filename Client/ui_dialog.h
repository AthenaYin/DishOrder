/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Fri Jul 6 00:01:04 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab0;
    QLabel *label_20;
    QLabel *label_25;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QWidget *tab1;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lEIP;
    QLabel *label;
    QLineEdit *lEPort;
    QPushButton *pBConn;
    QPushButton *pBAbort;
    QLabel *label_2;
    QLineEdit *lEMsg;
    QPushButton *pBSend;
    QWidget *tab2;
    QTextBrowser *textBrowser2;
    QLabel *label_4;
    QPushButton *ordButton;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *quecookButton;
    QPushButton *quedishButton;
    QLineEdit *squecookEdit;
    QPushButton *squecookButton;
    QLineEdit *squedishEdit;
    QPushButton *squedishButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *peonumEdit;
    QPushButton *tabidButton;
    QLineEdit *tableEdit;
    QLabel *label_19;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *del1Edit;
    QLineEdit *del2Edit;
    QPushButton *delButton;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLineEdit *add1Edit;
    QLineEdit *add2Edit;
    QPushButton *addButton;
    QWidget *tab3;
    QTextBrowser *textBrowser3;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *monEdit1;
    QLabel *label_10;
    QLineEdit *monEdit2;
    QPushButton *monButton;
    QLabel *label_11;
    QLineEdit *monEdit3;
    QPushButton *monButton2;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_6;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *calltabEdit;
    QLabel *label_14;
    QLineEdit *calldishEdit;
    QPushButton *decButton;
    QPushButton *callButton;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout_7;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *gettabEdit;
    QLabel *label_17;
    QLineEdit *getdishEdit;
    QPushButton *getButton;
    QWidget *layoutWidget8;
    QGridLayout *gridLayout_8;
    QLabel *label_18;
    QLineEdit *callsevEdit;
    QPushButton *callsevButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(767, 482);
        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 771, 491));
        tab0 = new QWidget();
        tab0->setObjectName(QString::fromUtf8("tab0"));
        label_20 = new QLabel(tab0);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(220, 10, 401, 51));
        QFont font;
        font.setPointSize(15);
        label_20->setFont(font);
        label_25 = new QLabel(tab0);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(440, 240, 311, 21));
        label_25->setFont(font);
        widget = new QWidget(tab0);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(330, 90, 359, 104));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout->addWidget(label_21);

        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout->addWidget(label_22);

        label_23 = new QLabel(widget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout->addWidget(label_23);

        label_24 = new QLabel(widget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout->addWidget(label_24);

        tabWidget->addTab(tab0, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        textBrowser = new QTextBrowser(tab1);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 271, 381));
        layoutWidget = new QWidget(tab1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 280, 403, 107));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        lEIP = new QLineEdit(layoutWidget);
        lEIP->setObjectName(QString::fromUtf8("lEIP"));

        gridLayout->addWidget(lEIP, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lEPort = new QLineEdit(layoutWidget);
        lEPort->setObjectName(QString::fromUtf8("lEPort"));

        gridLayout->addWidget(lEPort, 1, 1, 1, 1);

        pBConn = new QPushButton(layoutWidget);
        pBConn->setObjectName(QString::fromUtf8("pBConn"));

        gridLayout->addWidget(pBConn, 1, 2, 1, 1);

        pBAbort = new QPushButton(layoutWidget);
        pBAbort->setObjectName(QString::fromUtf8("pBAbort"));
        pBAbort->setEnabled(false);

        gridLayout->addWidget(pBAbort, 1, 3, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lEMsg = new QLineEdit(layoutWidget);
        lEMsg->setObjectName(QString::fromUtf8("lEMsg"));

        gridLayout->addWidget(lEMsg, 2, 1, 1, 2);

        pBSend = new QPushButton(layoutWidget);
        pBSend->setObjectName(QString::fromUtf8("pBSend"));
        pBSend->setEnabled(false);

        gridLayout->addWidget(pBSend, 2, 3, 1, 1);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        textBrowser2 = new QTextBrowser(tab2);
        textBrowser2->setObjectName(QString::fromUtf8("textBrowser2"));
        textBrowser2->setGeometry(QRect(20, 30, 331, 261));
        label_4 = new QLabel(tab2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 10, 131, 21));
        ordButton = new QPushButton(tab2);
        ordButton->setObjectName(QString::fromUtf8("ordButton"));
        ordButton->setGeometry(QRect(220, 320, 111, 71));
        layoutWidget1 = new QWidget(tab2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(429, 10, 261, 140));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        quecookButton = new QPushButton(layoutWidget1);
        quecookButton->setObjectName(QString::fromUtf8("quecookButton"));

        gridLayout_2->addWidget(quecookButton, 0, 0, 1, 2);

        quedishButton = new QPushButton(layoutWidget1);
        quedishButton->setObjectName(QString::fromUtf8("quedishButton"));

        gridLayout_2->addWidget(quedishButton, 1, 0, 1, 2);

        squecookEdit = new QLineEdit(layoutWidget1);
        squecookEdit->setObjectName(QString::fromUtf8("squecookEdit"));

        gridLayout_2->addWidget(squecookEdit, 2, 0, 1, 1);

        squecookButton = new QPushButton(layoutWidget1);
        squecookButton->setObjectName(QString::fromUtf8("squecookButton"));
        squecookButton->setEnabled(true);

        gridLayout_2->addWidget(squecookButton, 2, 1, 1, 1);

        squedishEdit = new QLineEdit(layoutWidget1);
        squedishEdit->setObjectName(QString::fromUtf8("squedishEdit"));

        gridLayout_2->addWidget(squedishEdit, 3, 0, 1, 1);

        squedishButton = new QPushButton(layoutWidget1);
        squedishButton->setObjectName(QString::fromUtf8("squedishButton"));
        squedishButton->setEnabled(true);

        gridLayout_2->addWidget(squedishButton, 3, 1, 1, 1);

        layoutWidget2 = new QWidget(tab2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(430, 160, 261, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        peonumEdit = new QLineEdit(layoutWidget2);
        peonumEdit->setObjectName(QString::fromUtf8("peonumEdit"));

        horizontalLayout->addWidget(peonumEdit);

        tabidButton = new QPushButton(layoutWidget2);
        tabidButton->setObjectName(QString::fromUtf8("tabidButton"));

        horizontalLayout->addWidget(tabidButton);

        tableEdit = new QLineEdit(tab2);
        tableEdit->setObjectName(QString::fromUtf8("tableEdit"));
        tableEdit->setGeometry(QRect(130, 340, 71, 31));
        label_19 = new QLabel(tab2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(30, 350, 91, 21));
        layoutWidget3 = new QWidget(tab2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(430, 310, 261, 97));
        gridLayout_3 = new QGridLayout(layoutWidget3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 2);

        del1Edit = new QLineEdit(layoutWidget3);
        del1Edit->setObjectName(QString::fromUtf8("del1Edit"));

        gridLayout_3->addWidget(del1Edit, 1, 0, 1, 1);

        del2Edit = new QLineEdit(layoutWidget3);
        del2Edit->setObjectName(QString::fromUtf8("del2Edit"));

        gridLayout_3->addWidget(del2Edit, 2, 0, 1, 1);

        delButton = new QPushButton(layoutWidget3);
        delButton->setObjectName(QString::fromUtf8("delButton"));

        gridLayout_3->addWidget(delButton, 2, 1, 1, 1);

        layoutWidget4 = new QWidget(tab2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(430, 200, 270, 97));
        gridLayout_4 = new QGridLayout(layoutWidget4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        add1Edit = new QLineEdit(layoutWidget4);
        add1Edit->setObjectName(QString::fromUtf8("add1Edit"));

        gridLayout_4->addWidget(add1Edit, 1, 0, 1, 1);

        add2Edit = new QLineEdit(layoutWidget4);
        add2Edit->setObjectName(QString::fromUtf8("add2Edit"));

        gridLayout_4->addWidget(add2Edit, 2, 0, 1, 1);

        addButton = new QPushButton(layoutWidget4);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout_4->addWidget(addButton, 2, 1, 1, 1);

        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        textBrowser3 = new QTextBrowser(tab3);
        textBrowser3->setObjectName(QString::fromUtf8("textBrowser3"));
        textBrowser3->setGeometry(QRect(25, 21, 341, 371));
        layoutWidget5 = new QWidget(tab3);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(400, 10, 323, 161));
        gridLayout_5 = new QGridLayout(layoutWidget5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(layoutWidget5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 1, 0, 1, 1);

        monEdit1 = new QLineEdit(layoutWidget5);
        monEdit1->setObjectName(QString::fromUtf8("monEdit1"));

        gridLayout_5->addWidget(monEdit1, 1, 1, 1, 1);

        label_10 = new QLabel(layoutWidget5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 2, 0, 1, 1);

        monEdit2 = new QLineEdit(layoutWidget5);
        monEdit2->setObjectName(QString::fromUtf8("monEdit2"));

        gridLayout_5->addWidget(monEdit2, 2, 1, 1, 1);

        monButton = new QPushButton(layoutWidget5);
        monButton->setObjectName(QString::fromUtf8("monButton"));

        gridLayout_5->addWidget(monButton, 2, 2, 1, 1);

        label_11 = new QLabel(layoutWidget5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 3, 0, 1, 3);

        monEdit3 = new QLineEdit(layoutWidget5);
        monEdit3->setObjectName(QString::fromUtf8("monEdit3"));

        gridLayout_5->addWidget(monEdit3, 4, 1, 1, 1);

        monButton2 = new QPushButton(layoutWidget5);
        monButton2->setObjectName(QString::fromUtf8("monButton2"));

        gridLayout_5->addWidget(monButton2, 4, 2, 1, 1);

        layoutWidget6 = new QWidget(tab3);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(400, 180, 323, 97));
        gridLayout_6 = new QGridLayout(layoutWidget6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_6->addWidget(label_12, 0, 0, 1, 1);

        label_13 = new QLabel(layoutWidget6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_6->addWidget(label_13, 1, 0, 1, 1);

        calltabEdit = new QLineEdit(layoutWidget6);
        calltabEdit->setObjectName(QString::fromUtf8("calltabEdit"));

        gridLayout_6->addWidget(calltabEdit, 1, 1, 1, 1);

        label_14 = new QLabel(layoutWidget6);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_6->addWidget(label_14, 2, 0, 1, 1);

        calldishEdit = new QLineEdit(layoutWidget6);
        calldishEdit->setObjectName(QString::fromUtf8("calldishEdit"));

        gridLayout_6->addWidget(calldishEdit, 2, 1, 1, 1);

        decButton = new QPushButton(layoutWidget6);
        decButton->setObjectName(QString::fromUtf8("decButton"));

        gridLayout_6->addWidget(decButton, 2, 2, 1, 1);

        callButton = new QPushButton(layoutWidget6);
        callButton->setObjectName(QString::fromUtf8("callButton"));

        gridLayout_6->addWidget(callButton, 1, 2, 1, 1);

        layoutWidget7 = new QWidget(tab3);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(400, 290, 323, 97));
        gridLayout_7 = new QGridLayout(layoutWidget7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget7);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_7->addWidget(label_15, 0, 0, 1, 2);

        label_16 = new QLabel(layoutWidget7);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_7->addWidget(label_16, 1, 0, 1, 1);

        gettabEdit = new QLineEdit(layoutWidget7);
        gettabEdit->setObjectName(QString::fromUtf8("gettabEdit"));

        gridLayout_7->addWidget(gettabEdit, 1, 1, 1, 1);

        label_17 = new QLabel(layoutWidget7);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_7->addWidget(label_17, 2, 0, 1, 1);

        getdishEdit = new QLineEdit(layoutWidget7);
        getdishEdit->setObjectName(QString::fromUtf8("getdishEdit"));

        gridLayout_7->addWidget(getdishEdit, 2, 1, 1, 1);

        getButton = new QPushButton(layoutWidget7);
        getButton->setObjectName(QString::fromUtf8("getButton"));

        gridLayout_7->addWidget(getButton, 2, 2, 1, 1);

        layoutWidget8 = new QWidget(tab3);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(400, 390, 321, 33));
        gridLayout_8 = new QGridLayout(layoutWidget8);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget8);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_8->addWidget(label_18, 0, 0, 1, 1);

        callsevEdit = new QLineEdit(layoutWidget8);
        callsevEdit->setObjectName(QString::fromUtf8("callsevEdit"));

        gridLayout_8->addWidget(callsevEdit, 0, 1, 1, 1);

        callsevButton = new QPushButton(layoutWidget8);
        callsevButton->setObjectName(QString::fromUtf8("callsevButton"));

        gridLayout_8->addWidget(callsevButton, 0, 2, 1, 1);

        tabWidget->addTab(tab3, QString());

        retranslateUi(Dialog);
        QObject::connect(lEMsg, SIGNAL(textChanged(QString)), Dialog, SLOT(EnableSendButton(QString)));

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\345\256\242\346\210\267\347\253\257", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Dialog", "\346\254\242\350\277\216\344\275\277\347\224\250FedoraMeow\347\202\271\350\217\234\347\263\273\347\273\237\357\275\236\357\275\236\357\275\236\357\275\236", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Dialog", "\347\245\235\346\202\250\344\275\277\347\224\250\346\204\211\345\277\253\357\275\236\357\275\236\357\275\236\357\275\236\357\275\236\357\275\236\357\275\236\357\275\236\357\275\236", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Dialog", "\344\275\277\347\224\250\346\214\207\345\215\227\357\274\232", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Dialog", "1.\350\257\267\347\216\260\345\234\250\350\201\212\345\244\251\347\225\214\351\235\242\350\277\236\346\216\245\345\210\260\346\234\215\345\212\241\345\231\250\347\253\257\344\273\245\345\220\216\345\206\215\350\277\233\350\241\214\345\210\253\347\232\204\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Dialog", "2.\347\202\271\350\217\234\345\211\215\350\257\267\345\205\210\345\234\250\342\200\234\346\237\245\350\257\242\345\222\214\347\202\271\350\217\234\342\200\234\347\225\214\351\235\242\344\270\255\347\224\263\350\257\267\346\241\214\345\217\267", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Dialog", "3.\346\234\215\345\212\241\347\225\214\351\235\242\345\217\257\344\273\245\345\256\236\347\216\260\347\273\223\345\270\220\343\200\201\345\221\274\345\217\253\346\234\215\345\212\241\345\221\230\343\200\201\345\202\254\350\217\234\345\212\237\350\203\275", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab0), QApplication::translate("Dialog", "\346\254\242\350\277\216\344\275\277\347\224\250", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "\345\257\271\346\226\271IP", 0, QApplication::UnicodeUTF8));
        lEIP->setText(QApplication::translate("Dialog", "127.0.0.1", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "\347\253\257\345\217\243\345\217\267", 0, QApplication::UnicodeUTF8));
        lEPort->setText(QApplication::translate("Dialog", "3333", 0, QApplication::UnicodeUTF8));
        pBConn->setText(QApplication::translate("Dialog", "\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
        pBAbort->setText(QApplication::translate("Dialog", "\346\226\255\345\274\200\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "\347\274\226\350\276\221\346\240\217", 0, QApplication::UnicodeUTF8));
        pBSend->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201\346\266\210\346\201\257", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("Dialog", "\350\201\212\345\244\251\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "\346\237\245\350\257\242\345\222\214\347\202\271\350\217\234\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        ordButton->setText(QApplication::translate("Dialog", "\344\270\200\351\224\256\344\270\213\345\215\225\357\274\201", 0, QApplication::UnicodeUTF8));
        quecookButton->setText(QApplication::translate("Dialog", "\346\237\245\350\257\242\346\211\200\346\234\211\345\216\250\345\270\210\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        quedishButton->setText(QApplication::translate("Dialog", "\346\237\245\350\257\242\346\211\200\346\234\211\350\217\234\345\223\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        squecookButton->setText(QApplication::translate("Dialog", "\350\276\223\345\205\245\345\216\250\345\270\210\345\220\215\345\255\227\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        squedishButton->setText(QApplication::translate("Dialog", "\350\276\223\345\205\245\350\217\234\345\223\201\345\220\215\345\255\227\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "\344\272\272\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        tabidButton->setText(QApplication::translate("Dialog", "\347\224\263\350\257\267\346\241\214\345\217\267", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Dialog", "\350\257\267\350\276\223\345\205\245\346\241\214\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "\350\257\267\350\276\223\345\205\245\350\217\234\345\223\201\347\274\226\345\217\267\345\222\214\346\241\214\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        delButton->setText(QApplication::translate("Dialog", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog", "\350\257\267\350\276\223\345\205\245\346\241\214\345\217\267\345\222\214\350\217\234\345\223\201\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        add2Edit->setText(QString());
        addButton->setText(QApplication::translate("Dialog", "\345\212\240\345\205\245", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("Dialog", "\346\237\245\350\257\242\345\222\214\347\202\271\350\217\234", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog", "\347\273\223\347\256\227", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Dialog", "\346\241\214\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Dialog", "\344\273\230\351\222\261\357\274\232", 0, QApplication::UnicodeUTF8));
        monButton->setText(QApplication::translate("Dialog", "\344\271\260\345\215\225", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Dialog", "\345\246\202\346\236\234\346\202\250\346\262\241\345\270\246\345\244\237\351\222\261\357\274\214\350\257\267\350\276\223\345\205\245\344\270\272\346\202\250\344\271\260\345\215\225\347\232\204\346\241\214\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        monButton2->setText(QApplication::translate("Dialog", "\344\273\243\344\273\230", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Dialog", "\345\202\254\350\217\234/\351\200\200\350\217\234", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Dialog", "\346\241\214\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Dialog", "\350\217\234\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        decButton->setText(QApplication::translate("Dialog", "\351\200\200\350\217\234", 0, QApplication::UnicodeUTF8));
        callButton->setText(QApplication::translate("Dialog", "\345\202\254\350\217\234", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Dialog", "\345\221\212\347\237\245\344\270\212\350\217\234\346\203\205\345\206\265", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Dialog", "\346\241\214\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Dialog", "\350\217\234\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        getButton->setText(QApplication::translate("Dialog", "\345\267\262\344\270\212\350\217\234", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Dialog", "\345\221\274\345\217\253\346\234\215\345\212\241\345\221\230\357\274\232", 0, QApplication::UnicodeUTF8));
        callsevButton->setText(QApplication::translate("Dialog", "\345\221\274\345\217\253", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("Dialog", "\346\234\215\345\212\241\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
