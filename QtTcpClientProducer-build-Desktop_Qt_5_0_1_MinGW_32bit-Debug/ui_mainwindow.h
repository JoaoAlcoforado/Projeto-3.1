/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditIP;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSliderMin;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLCDNumber *lcdNumberMin;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSliderMax;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumberMax;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSlider *horizontalSliderTiming;
    QLCDNumber *lcdNumberTiming;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QTextBrowser *textBrowserDate;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(454, 381);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEditIP = new QLineEdit(centralWidget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        verticalLayout_3->addWidget(lineEditIP);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));

        horizontalLayout->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName(QStringLiteral("pushButtonDisconnect"));

        horizontalLayout->addWidget(pushButtonDisconnect);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSliderMin = new QSlider(centralWidget);
        horizontalSliderMin->setObjectName(QStringLiteral("horizontalSliderMin"));
        horizontalSliderMin->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderMin);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lcdNumberMin = new QLCDNumber(centralWidget);
        lcdNumberMin->setObjectName(QStringLiteral("lcdNumberMin"));

        verticalLayout->addWidget(lcdNumberMin);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSliderMax = new QSlider(centralWidget);
        horizontalSliderMax->setObjectName(QStringLiteral("horizontalSliderMax"));
        horizontalSliderMax->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderMax);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lcdNumberMax = new QLCDNumber(centralWidget);
        lcdNumberMax->setObjectName(QStringLiteral("lcdNumberMax"));

        verticalLayout_2->addWidget(lcdNumberMax);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSliderTiming = new QSlider(centralWidget);
        horizontalSliderTiming->setObjectName(QStringLiteral("horizontalSliderTiming"));
        horizontalSliderTiming->setMaximum(4);
        horizontalSliderTiming->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderTiming);

        lcdNumberTiming = new QLCDNumber(centralWidget);
        lcdNumberTiming->setObjectName(QStringLiteral("lcdNumberTiming"));
        lcdNumberTiming->setFrameShape(QFrame::NoFrame);
        lcdNumberTiming->setFrameShadow(QFrame::Plain);

        horizontalLayout_4->addWidget(lcdNumberTiming);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));

        horizontalLayout_5->addWidget(pushButtonStart);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));

        horizontalLayout_5->addWidget(pushButtonStop);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        textBrowserDate = new QTextBrowser(centralWidget);
        textBrowserDate->setObjectName(QStringLiteral("textBrowserDate"));

        gridLayout_2->addWidget(textBrowserDate, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 454, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderTiming, SIGNAL(valueChanged(int)), lcdNumberTiming, SLOT(display(int)));
        QObject::connect(horizontalSliderMax, SIGNAL(valueChanged(int)), lcdNumberMax, SLOT(display(int)));
        QObject::connect(horizontalSliderMin, SIGNAL(valueChanged(int)), lcdNumberMin, SLOT(display(int)));
        QObject::connect(horizontalSliderTiming, SIGNAL(valueChanged(int)), MainWindow, SLOT(startTime()));
        QObject::connect(lineEditIP, SIGNAL(textEdited(QString)), MainWindow, SLOT(mudaIP(QString)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lineEditIP->setText(QApplication::translate("MainWindow", "Digite o IP aqui...", 0));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        pushButtonDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        label->setText(QApplication::translate("MainWindow", "Min", 0));
        label_2->setText(QApplication::translate("MainWindow", "Max", 0));
        label_3->setText(QApplication::translate("MainWindow", "Timing(s)", 0));
        pushButtonStart->setText(QApplication::translate("MainWindow", "Start", 0));
        pushButtonStop->setText(QApplication::translate("MainWindow", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
