/********************************************************************************
** Form generated from reading UI file 'CrptoLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRPTOLOGIN_H
#define UI_CRPTOLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CryptoHubLogin
{
public:
    QGroupBox *groupBox;
    QPushButton *btn_login;
    QGraphicsView *graphicsView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QPushButton *btn_cancel;

    void setupUi(QWidget *CryptoHubLogin)
    {
        if (CryptoHubLogin->objectName().isEmpty())
            CryptoHubLogin->setObjectName(QStringLiteral("CryptoHubLogin"));
        CryptoHubLogin->setWindowModality(Qt::ApplicationModal);
        CryptoHubLogin->resize(459, 178);
        CryptoHubLogin->setMouseTracking(false);
        groupBox = new QGroupBox(CryptoHubLogin);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 431, 151));
        btn_login = new QPushButton(groupBox);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        btn_login->setGeometry(QRect(320, 110, 75, 23));
        graphicsView = new QGraphicsView(groupBox);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 20, 121, 121));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(140, 40, 251, 61));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        btn_cancel = new QPushButton(groupBox);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(220, 110, 75, 23));
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, btn_cancel);
        QWidget::setTabOrder(btn_cancel, btn_login);
        QWidget::setTabOrder(btn_login, graphicsView);

        retranslateUi(CryptoHubLogin);

        QMetaObject::connectSlotsByName(CryptoHubLogin);
    } // setupUi

    void retranslateUi(QWidget *CryptoHubLogin)
    {
        CryptoHubLogin->setWindowTitle(QApplication::translate("CryptoHubLogin", "Form", 0));
        groupBox->setTitle(QApplication::translate("CryptoHubLogin", "GroupBox", 0));
        btn_login->setText(QApplication::translate("CryptoHubLogin", "Login", 0));
        label->setText(QApplication::translate("CryptoHubLogin", "Username", 0));
        label_2->setText(QApplication::translate("CryptoHubLogin", "Password", 0));
        btn_cancel->setText(QApplication::translate("CryptoHubLogin", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class CryptoHubLogin: public Ui_CryptoHubLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRPTOLOGIN_H
