/********************************************************************************
** Form generated from reading UI file 'mainlauncher.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINLAUNCHER_H
#define UI_MAINLAUNCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainLauncher
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *login_img;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *mainLauncher)
    {
        if (mainLauncher->objectName().isEmpty())
            mainLauncher->setObjectName("mainLauncher");
        mainLauncher->resize(700, 450);
        mainLauncher->setMinimumSize(QSize(700, 450));
        mainLauncher->setMaximumSize(QSize(700, 450));
        centralwidget = new QWidget(mainLauncher);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        login_img = new QLabel(centralwidget);
        login_img->setObjectName("login_img");
        login_img->setMinimumSize(QSize(300, 450));
        login_img->setMaximumSize(QSize(300, 450));
        login_img->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));

        horizontalLayout->addWidget(login_img);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        mainLauncher->setCentralWidget(centralwidget);

        retranslateUi(mainLauncher);

        QMetaObject::connectSlotsByName(mainLauncher);
    } // setupUi

    void retranslateUi(QMainWindow *mainLauncher)
    {
        mainLauncher->setWindowTitle(QCoreApplication::translate("mainLauncher", "mainLauncher", nullptr));
        login_img->setText(QCoreApplication::translate("mainLauncher", "add image", nullptr));
        pushButton->setText(QCoreApplication::translate("mainLauncher", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainLauncher: public Ui_mainLauncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLAUNCHER_H
