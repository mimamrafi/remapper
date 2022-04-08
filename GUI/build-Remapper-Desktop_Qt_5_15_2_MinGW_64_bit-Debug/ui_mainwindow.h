/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *val;
    QHBoxLayout *horizontalLayout;
    QLineEdit *low1;
    QLabel *label;
    QLineEdit *high1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *low2;
    QLabel *label_2;
    QLineEdit *high2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *output;
    QPushButton *Refresh;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(346, 209);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        val = new QLineEdit(centralwidget);
        val->setObjectName(QString::fromUtf8("val"));
        val->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-style:solid;\n"
"border-width: 1px;\n"
"border-color: grey;\n"
"background-color: #edeae8;\n"
"margin-top:2px;\n"
"border-radius : 5px;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"	background-color : #e0e0e0;\n"
"}\n"
"\n"
"\n"
"QLineEdit:focus{\n"
"	background-color:#e0e0e0;\n"
"	border-width : 3px;\n"
"	border-color:#00baed;\n"
"}"));
        val->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(val);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        low1 = new QLineEdit(centralwidget);
        low1->setObjectName(QString::fromUtf8("low1"));
        low1->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-style:solid;\n"
"border-width: 1px;\n"
"border-color: grey;\n"
"background-color: #edeae8;\n"
"margin-top:2px;\n"
"border-radius : 5px;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"	background-color : #e0e0e0;\n"
"}\n"
"\n"
"\n"
"QLineEdit:focus{\n"
"	background-color:#e0e0e0;\n"
"	border-width : 3px;\n"
"	border-color:#00baed;\n"
"}"));
        low1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(low1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        high1 = new QLineEdit(centralwidget);
        high1->setObjectName(QString::fromUtf8("high1"));
        high1->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-style:solid;\n"
"border-width: 1px;\n"
"border-color: grey;\n"
"background-color: #edeae8;\n"
"margin-top:2px;\n"
"border-radius : 5px;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"	background-color : #e0e0e0;\n"
"}\n"
"\n"
"\n"
"QLineEdit:focus{\n"
"	background-color:#e0e0e0;\n"
"	border-width : 3px;\n"
"	border-color:#00baed;\n"
"}"));
        high1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(high1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        low2 = new QLineEdit(centralwidget);
        low2->setObjectName(QString::fromUtf8("low2"));
        low2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-style:solid;\n"
"border-width: 1px;\n"
"border-color: grey;\n"
"background-color: #edeae8;\n"
"margin-top:2px;\n"
"border-radius : 5px;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"	background-color : #e0e0e0;\n"
"}\n"
"\n"
"\n"
"QLineEdit:focus{\n"
"	background-color:#e0e0e0;\n"
"	border-width : 3px;\n"
"	border-color:#00baed;\n"
"}"));
        low2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(low2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        high2 = new QLineEdit(centralwidget);
        high2->setObjectName(QString::fromUtf8("high2"));
        high2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-style:solid;\n"
"border-width: 1px;\n"
"border-color: grey;\n"
"background-color: #edeae8;\n"
"margin-top:2px;\n"
"border-radius : 5px;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"	background-color : #e0e0e0;\n"
"}\n"
"\n"
"\n"
"QLineEdit:focus{\n"
"	background-color:#e0e0e0;\n"
"	border-width : 3px;\n"
"	border-color:#00baed;\n"
"}"));
        high2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(high2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: black;\n"
"	image : url(:/new/prefix1/remapper.png);\n"
"	border: 1px solid white; \n"
"	border-radius: 10px;\n"
"} \n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(102, 102, 102);\n"
"	image : url(:/new/prefix1/remapper.png);\n"
"	border: 1px solid white; \n"
"	border-radius: 10px;\n"
"	color: white;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        output = new QLabel(centralwidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setFont(font);
        output->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        output->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(output);

        Refresh = new QPushButton(centralwidget);
        Refresh->setObjectName(QString::fromUtf8("Refresh"));
        QFont font1;
        font1.setPointSize(10);
        Refresh->setFont(font1);
        Refresh->setCursor(QCursor(Qt::PointingHandCursor));
        Refresh->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color:white;\n"
"	background-color: black;\n"
"	border: 1px solid white; \n"
"	border-radius: 10px;\n"
"} \n"
"\n"
"QPushButton:hover{\n"
"	color:white;\n"
"	background-color: rgb(40, 167, 222);\n"
"	border: 1px solid white; \n"
"	border-radius: 10px;\n"
"	color: white;\n"
"}"));

        horizontalLayout_4->addWidget(Refresh);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(val, low1);
        QWidget::setTabOrder(low1, high1);
        QWidget::setTabOrder(high1, low2);
        QWidget::setTabOrder(low2, high2);
        QWidget::setTabOrder(high2, pushButton);
        QWidget::setTabOrder(pushButton, Refresh);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Remapper", nullptr));
        val->setInputMask(QString());
        val->setText(QString());
        val->setPlaceholderText(QCoreApplication::translate("MainWindow", "Value Input", nullptr));
        low1->setInputMask(QString());
        low1->setPlaceholderText(QCoreApplication::translate("MainWindow", "Low Value 1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        high1->setInputMask(QString());
        high1->setPlaceholderText(QCoreApplication::translate("MainWindow", "High Value 1", nullptr));
        low2->setInputMask(QString());
        low2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Low Value 2", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        high2->setInputMask(QString());
        high2->setPlaceholderText(QCoreApplication::translate("MainWindow", "High Value 2", nullptr));
        pushButton->setText(QString());
        output->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        Refresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
