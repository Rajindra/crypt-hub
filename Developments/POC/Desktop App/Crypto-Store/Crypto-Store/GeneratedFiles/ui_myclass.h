/********************************************************************************
** Form generated from reading UI file 'myclass.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCLASS_H
#define UI_MYCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyClassClass
{
public:
    QAction *actionMyClick;
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MyClassClass)
    {
        if (MyClassClass->objectName().isEmpty())
            MyClassClass->setObjectName(QStringLiteral("MyClassClass"));
        MyClassClass->resize(832, 458);
        actionMyClick = new QAction(MyClassClass);
        actionMyClick->setObjectName(QStringLiteral("actionMyClick"));
        actionMyClick->setCheckable(true);
        centralWidget = new QWidget(MyClassClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 240, 46, 13));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(130, 130, 131, 111));
        MyClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyClassClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 832, 21));
        MyClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyClassClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyClassClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyClassClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MyClassClass);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_3 = new QGridLayout(dockWidgetContents);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_2 = new QPushButton(dockWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(133, 0));
        pushButton_2->setMaximumSize(QSize(250, 150));
        pushButton_2->setMouseTracking(true);
        pushButton_2->setIconSize(QSize(100, 100));
        pushButton_2->setDefault(false);

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(dockWidgetContents);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(133, 0));
        pushButton_3->setMaximumSize(QSize(250, 150));
        pushButton_3->setMouseTracking(true);
        pushButton_3->setIconSize(QSize(100, 100));
        pushButton_3->setDefault(false);

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton = new QPushButton(dockWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(133, 0));
        pushButton->setMaximumSize(QSize(250, 150));
        pushButton->setMouseTracking(true);
        pushButton->setIconSize(QSize(100, 100));
        pushButton->setDefault(false);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        MyClassClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        retranslateUi(MyClassClass);
        QObject::connect(pushButton_4, SIGNAL(clicked()), MyClassClass, SLOT(MyClick99()));

        QMetaObject::connectSlotsByName(MyClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyClassClass)
    {
        MyClassClass->setWindowTitle(QApplication::translate("MyClassClass", "MyClass", 0));
        actionMyClick->setText(QApplication::translate("MyClassClass", "MyClick", 0));
        label->setText(QApplication::translate("MyClassClass", "TextLabel", 0));
        pushButton_4->setText(QApplication::translate("MyClassClass", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("MyClassClass", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("MyClassClass", "PushButton", 0));
        pushButton->setText(QApplication::translate("MyClassClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class MyClassClass: public Ui_MyClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLASS_H
