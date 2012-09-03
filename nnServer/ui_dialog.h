/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Fri Jul 6 04:22:21 2012
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
#include <QtGui/QTableView>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab1;
    QLabel *labelwel;
    QLabel *blesslabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *uselabel;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QWidget *tab2;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lEPort;
    QPushButton *pBBind;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lEMsg;
    QPushButton *pBSend;
    QWidget *tab3;
    QTableView *view;
    QPushButton *freshButton;
    QLabel *label_5;
    QTextBrowser *queBrowser;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *queButton;
    QLineEdit *queEdit;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLineEdit *delEdit;
    QPushButton *delButton;
    QLabel *label_9;
    QLabel *label_12;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QPushButton *insertButton;
    QLabel *label_4;
    QLineEdit *idEdit;
    QLabel *label_6;
    QLineEdit *nameEdit;
    QLabel *label_8;
    QLineEdit *timeEdit;
    QLabel *label_7;
    QLineEdit *welEdit;
    QWidget *tab4;
    QTableView *view2;
    QLabel *label_13;
    QPushButton *freshButton2;
    QTextBrowser *textBrowser3;
    QLabel *label_21;
    QLineEdit *queEdit2;
    QPushButton *queButton2;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QPushButton *insertButton2;
    QLabel *label_15;
    QLineEdit *idEdit2;
    QLabel *label_16;
    QLineEdit *nameEdit2;
    QLabel *label_17;
    QLineEdit *expEdit;
    QLabel *label_18;
    QLineEdit *goodEdit;
    QLabel *label_19;
    QLineEdit *welEdit2;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_4;
    QLabel *label_20;
    QLineEdit *delEdit2;
    QPushButton *delButton2;
    QWidget *tab5;
    QLabel *label_22;
    QPushButton *freshButton3;
    QTableView *view3;
    QTextBrowser *textBrowser2;
    QPushButton *todayButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(753, 505);
        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 751, 508));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        labelwel = new QLabel(tab1);
        labelwel->setObjectName(QString::fromUtf8("labelwel"));
        labelwel->setGeometry(QRect(40, 50, 361, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Cantarell"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        labelwel->setFont(font);
        blesslabel = new QLabel(tab1);
        blesslabel->setObjectName(QString::fromUtf8("blesslabel"));
        blesslabel->setGeometry(QRect(330, 360, 301, 21));
        QFont font1;
        font1.setPointSize(15);
        blesslabel->setFont(font1);
        widget = new QWidget(tab1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 150, 431, 141));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        uselabel = new QLabel(widget);
        uselabel->setObjectName(QString::fromUtf8("uselabel"));

        verticalLayout_2->addWidget(uselabel);

        label1 = new QLabel(widget);
        label1->setObjectName(QString::fromUtf8("label1"));

        verticalLayout_2->addWidget(label1);

        label2 = new QLabel(widget);
        label2->setObjectName(QString::fromUtf8("label2"));

        verticalLayout_2->addWidget(label2);

        label3 = new QLabel(widget);
        label3->setObjectName(QString::fromUtf8("label3"));

        verticalLayout_2->addWidget(label3);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        textBrowser = new QTextBrowser(tab2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 20, 351, 381));
        layoutWidget = new QWidget(tab2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(420, 310, 309, 78));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lEPort = new QLineEdit(layoutWidget);
        lEPort->setObjectName(QString::fromUtf8("lEPort"));

        horizontalLayout->addWidget(lEPort);

        pBBind = new QPushButton(layoutWidget);
        pBBind->setObjectName(QString::fromUtf8("pBBind"));

        horizontalLayout->addWidget(pBBind);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lEMsg = new QLineEdit(layoutWidget);
        lEMsg->setObjectName(QString::fromUtf8("lEMsg"));

        horizontalLayout_2->addWidget(lEMsg);

        pBSend = new QPushButton(layoutWidget);
        pBSend->setObjectName(QString::fromUtf8("pBSend"));
        pBSend->setEnabled(false);

        horizontalLayout_2->addWidget(pBSend);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        view = new QTableView(tab3);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(10, 40, 371, 211));
        freshButton = new QPushButton(tab3);
        freshButton->setObjectName(QString::fromUtf8("freshButton"));
        freshButton->setGeometry(QRect(280, 10, 96, 29));
        label_5 = new QLabel(tab3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 100, 67, 21));
        queBrowser = new QTextBrowser(tab3);
        queBrowser->setObjectName(QString::fromUtf8("queBrowser"));
        queBrowser->setGeometry(QRect(10, 281, 371, 161));
        label_10 = new QLabel(tab3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 10, 121, 21));
        label_11 = new QLabel(tab3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 260, 111, 21));
        queButton = new QPushButton(tab3);
        queButton->setObjectName(QString::fromUtf8("queButton"));
        queButton->setGeometry(QRect(470, 390, 96, 29));
        queEdit = new QLineEdit(tab3);
        queEdit->setObjectName(QString::fromUtf8("queEdit"));
        queEdit->setGeometry(QRect(470, 350, 241, 31));
        layoutWidget1 = new QWidget(tab3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(430, 210, 250, 61));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        delEdit = new QLineEdit(layoutWidget1);
        delEdit->setObjectName(QString::fromUtf8("delEdit"));

        gridLayout_2->addWidget(delEdit, 2, 0, 1, 1);

        delButton = new QPushButton(layoutWidget1);
        delButton->setObjectName(QString::fromUtf8("delButton"));

        gridLayout_2->addWidget(delButton, 2, 1, 1, 1);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        label_12 = new QLabel(tab3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(470, 320, 157, 21));
        widget1 = new QWidget(tab3);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(430, 20, 281, 179));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        insertButton = new QPushButton(widget1);
        insertButton->setObjectName(QString::fromUtf8("insertButton"));

        gridLayout->addWidget(insertButton, 0, 1, 1, 1);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        idEdit = new QLineEdit(widget1);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));

        gridLayout->addWidget(idEdit, 1, 1, 1, 1);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        nameEdit = new QLineEdit(widget1);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 2, 1, 1, 1);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        timeEdit = new QLineEdit(widget1);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        gridLayout->addWidget(timeEdit, 3, 1, 1, 1);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        welEdit = new QLineEdit(widget1);
        welEdit->setObjectName(QString::fromUtf8("welEdit"));

        gridLayout->addWidget(welEdit, 4, 1, 1, 1);

        tabWidget->addTab(tab3, QString());
        tab4 = new QWidget();
        tab4->setObjectName(QString::fromUtf8("tab4"));
        view2 = new QTableView(tab4);
        view2->setObjectName(QString::fromUtf8("view2"));
        view2->setGeometry(QRect(10, 40, 371, 211));
        label_13 = new QLabel(tab4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 10, 101, 21));
        freshButton2 = new QPushButton(tab4);
        freshButton2->setObjectName(QString::fromUtf8("freshButton2"));
        freshButton2->setGeometry(QRect(280, 10, 96, 29));
        textBrowser3 = new QTextBrowser(tab4);
        textBrowser3->setObjectName(QString::fromUtf8("textBrowser3"));
        textBrowser3->setGeometry(QRect(10, 280, 371, 161));
        label_21 = new QLabel(tab4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(430, 320, 181, 21));
        queEdit2 = new QLineEdit(tab4);
        queEdit2->setObjectName(QString::fromUtf8("queEdit2"));
        queEdit2->setGeometry(QRect(430, 350, 241, 31));
        queButton2 = new QPushButton(tab4);
        queButton2->setObjectName(QString::fromUtf8("queButton2"));
        queButton2->setGeometry(QRect(430, 400, 96, 29));
        layoutWidget2 = new QWidget(tab4);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(420, 10, 291, 216));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);

        insertButton2 = new QPushButton(layoutWidget2);
        insertButton2->setObjectName(QString::fromUtf8("insertButton2"));

        gridLayout_3->addWidget(insertButton2, 0, 1, 1, 1);

        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 1, 0, 1, 1);

        idEdit2 = new QLineEdit(layoutWidget2);
        idEdit2->setObjectName(QString::fromUtf8("idEdit2"));

        gridLayout_3->addWidget(idEdit2, 1, 1, 1, 1);

        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 2, 0, 1, 1);

        nameEdit2 = new QLineEdit(layoutWidget2);
        nameEdit2->setObjectName(QString::fromUtf8("nameEdit2"));

        gridLayout_3->addWidget(nameEdit2, 2, 1, 1, 1);

        label_17 = new QLabel(layoutWidget2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_3->addWidget(label_17, 3, 0, 1, 1);

        expEdit = new QLineEdit(layoutWidget2);
        expEdit->setObjectName(QString::fromUtf8("expEdit"));

        gridLayout_3->addWidget(expEdit, 3, 1, 1, 1);

        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_3->addWidget(label_18, 4, 0, 1, 1);

        goodEdit = new QLineEdit(layoutWidget2);
        goodEdit->setObjectName(QString::fromUtf8("goodEdit"));

        gridLayout_3->addWidget(goodEdit, 4, 1, 1, 1);

        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 5, 0, 1, 1);

        welEdit2 = new QLineEdit(layoutWidget2);
        welEdit2->setObjectName(QString::fromUtf8("welEdit2"));

        gridLayout_3->addWidget(welEdit2, 5, 1, 1, 1);

        layoutWidget3 = new QWidget(tab4);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(420, 240, 250, 60));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_4->addWidget(label_20, 0, 0, 1, 1);

        delEdit2 = new QLineEdit(layoutWidget3);
        delEdit2->setObjectName(QString::fromUtf8("delEdit2"));

        gridLayout_4->addWidget(delEdit2, 1, 0, 1, 1);

        delButton2 = new QPushButton(layoutWidget3);
        delButton2->setObjectName(QString::fromUtf8("delButton2"));

        gridLayout_4->addWidget(delButton2, 1, 1, 1, 1);

        tabWidget->addTab(tab4, QString());
        tab5 = new QWidget();
        tab5->setObjectName(QString::fromUtf8("tab5"));
        label_22 = new QLabel(tab5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 10, 111, 21));
        freshButton3 = new QPushButton(tab5);
        freshButton3->setObjectName(QString::fromUtf8("freshButton3"));
        freshButton3->setGeometry(QRect(320, 10, 96, 29));
        view3 = new QTableView(tab5);
        view3->setObjectName(QString::fromUtf8("view3"));
        view3->setGeometry(QRect(15, 41, 411, 391));
        textBrowser2 = new QTextBrowser(tab5);
        textBrowser2->setObjectName(QString::fromUtf8("textBrowser2"));
        textBrowser2->setGeometry(QRect(450, 150, 281, 211));
        todayButton = new QPushButton(tab5);
        todayButton->setObjectName(QString::fromUtf8("todayButton"));
        todayButton->setGeometry(QRect(585, 110, 141, 29));
        tabWidget->addTab(tab5, QString());
#ifndef QT_NO_SHORTCUT
        label->setBuddy(lEPort);
        label_2->setBuddy(lEMsg);
#endif // QT_NO_SHORTCUT

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\346\234\215\345\212\241\345\231\250\347\253\257", 0, QApplication::UnicodeUTF8));
        labelwel->setText(QApplication::translate("Dialog", "\346\254\242\350\277\216\344\275\277\347\224\250FedoraMeow\347\202\271\350\217\234\347\263\273\347\273\237\357\275\236\357\275\236\357\275\236\357\275\236", 0, QApplication::UnicodeUTF8));
        blesslabel->setText(QApplication::translate("Dialog", "\347\245\235\346\202\250\344\275\277\347\224\250\346\204\211\345\277\253\357\275\236\357\275\236\357\275\236\357\275\236\357\275\236\357\275\236\357\275\236\357\275\236\357\275\236", 0, QApplication::UnicodeUTF8));
        uselabel->setText(QApplication::translate("Dialog", "\344\275\277\347\224\250\346\214\207\345\215\227\357\274\232", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("Dialog", "1.\345\234\250\350\201\212\345\244\251\347\225\214\351\235\242\357\274\214\350\257\267\345\205\210\347\202\271\345\207\273\342\200\234\347\233\221\345\220\254\342\200\235\346\214\211\351\222\256\350\277\233\350\241\214\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
        label2->setText(QApplication::translate("Dialog", "2.\345\234\250\350\217\234\345\223\201\345\222\214\345\216\250\345\270\210\350\265\204\346\226\231\347\273\264\346\212\244\347\225\214\351\235\242\345\217\257\344\273\245\346\237\245\347\234\213\343\200\201\345\242\236\345\212\240\343\200\201\345\210\240\351\231\244\350\265\204\346\226\231", 0, QApplication::UnicodeUTF8));
        label3->setText(QApplication::translate("Dialog", "3.\345\234\250\351\244\220\346\241\214\347\273\264\346\212\244\347\225\214\351\235\242\345\217\257\344\273\245\346\237\245\347\234\213\351\244\220\346\241\214\344\277\241\346\201\257\345\222\214\347\273\237\350\256\241\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("Dialog", "\346\254\242\350\277\216\344\275\277\347\224\250", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "\347\233\221\345\220\254\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        lEPort->setText(QApplication::translate("Dialog", "3333", 0, QApplication::UnicodeUTF8));
        pBBind->setText(QApplication::translate("Dialog", "\347\233\221\345\220\254", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201\346\266\210\346\201\257", 0, QApplication::UnicodeUTF8));
        pBSend->setText(QApplication::translate("Dialog", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("Dialog", "\350\201\212\345\244\251\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        freshButton->setText(QApplication::translate("Dialog", "\345\210\267\346\226\260\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        label_10->setText(QApplication::translate("Dialog", "\350\217\234\345\223\201\344\277\241\346\201\257\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Dialog", "\350\217\234\345\223\201\346\237\245\350\257\242\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        queButton->setText(QApplication::translate("Dialog", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        delButton->setText(QApplication::translate("Dialog", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Dialog", "\344\273\245\347\274\226\345\217\267\345\210\240\351\231\244\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Dialog", "\344\273\245\350\217\234\345\220\215\344\270\272\345\205\263\351\224\256\345\255\227\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "\345\242\236\345\212\240\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        insertButton->setText(QApplication::translate("Dialog", "\345\242\236\345\212\240", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "\350\217\234\345\220\215", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog", "\347\224\250\346\227\266", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "\344\273\267\351\222\261", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("Dialog", "\350\217\234\345\223\201\347\273\264\346\212\244\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Dialog", "\345\216\250\345\270\210\344\277\241\346\201\257\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        freshButton2->setText(QApplication::translate("Dialog", "\345\210\267\346\226\260\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Dialog", "\344\273\245\345\216\250\345\270\210\345\220\215\345\255\227\344\270\272\345\205\263\351\224\256\345\255\227\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        queButton2->setText(QApplication::translate("Dialog", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Dialog", "\345\242\236\345\212\240\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        insertButton2->setText(QApplication::translate("Dialog", "\345\242\236\345\212\240", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Dialog", "\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Dialog", "\345\220\215\345\255\227", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Dialog", "\347\273\217\351\252\214", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Dialog", "\346\223\205\351\225\277\350\217\234\345\274\217", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Dialog", "\345\245\275\350\257\204\345\272\246", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Dialog", "\344\273\245\347\274\226\345\217\267\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        delButton2->setText(QApplication::translate("Dialog", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab4), QApplication::translate("Dialog", "\345\216\250\345\270\210\350\265\204\346\226\231\347\273\264\346\212\244\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Dialog", "\351\244\220\346\241\214\344\275\277\347\224\250\346\203\205\345\206\265\357\274\232", 0, QApplication::UnicodeUTF8));
        freshButton3->setText(QApplication::translate("Dialog", "\345\210\267\346\226\260\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        todayButton->setText(QApplication::translate("Dialog", "\346\237\245\347\234\213\344\273\212\346\227\245\346\203\205\345\206\265", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab5), QApplication::translate("Dialog", "\351\244\220\346\241\214\347\273\264\346\212\244\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
