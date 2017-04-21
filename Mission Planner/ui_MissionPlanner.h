/********************************************************************************
** Form generated from reading UI file 'MissionPlannerY47240.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MISSIONPLANNERY47240_H
#define MISSIONPLANNERY47240_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionExit;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *saveBtn;
    QPushButton *clearBtn;
    QTextEdit *nameEdit;
    QLabel *label_3;
    QPushButton *addBhvBtn;
    QPushButton *addCfgBtn;
    QTableWidget *bhvTable;
    QTableWidget *cfgTable;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(636, 593);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 120, 131, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 110, 251, 41));
        label_2->setFont(font);
        saveBtn = new QPushButton(centralwidget);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(100, 490, 121, 41));
        clearBtn = new QPushButton(centralwidget);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(430, 490, 121, 41));
        nameEdit = new QTextEdit(centralwidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(280, 20, 221, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 20, 111, 41));
        QFont font1;
        font1.setPointSize(16);
        label_3->setFont(font1);
        addBhvBtn = new QPushButton(centralwidget);
        addBhvBtn->setObjectName(QStringLiteral("addBhvBtn"));
        addBhvBtn->setGeometry(QRect(100, 400, 101, 31));
        addCfgBtn = new QPushButton(centralwidget);
        addCfgBtn->setObjectName(QStringLiteral("addCfgBtn"));
        addCfgBtn->setGeometry(QRect(430, 400, 101, 31));
        bhvTable = new QTableWidget(centralwidget);
        bhvTable->setObjectName(QStringLiteral("bhvTable"));
        bhvTable->setGeometry(QRect(20, 150, 291, 241));
        cfgTable = new QTableWidget(centralwidget);
        cfgTable->setObjectName(QStringLiteral("cfgTable"));
        cfgTable->setGeometry(QRect(320, 150, 301, 241));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(280, 90, 82, 17));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(360, 90, 82, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 90, 101, 16));
        QFont font2;
        font2.setPointSize(12);
        label_4->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 636, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MOOS Mission Planner", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Behaviors", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Configuration Blocks", Q_NULLPTR));
        saveBtn->setText(QApplication::translate("MainWindow", "Save Mission", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("MainWindow", "Clear Mission", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "MissionTitle", Q_NULLPTR));
        addBhvBtn->setText(QApplication::translate("MainWindow", "Add Behavior", Q_NULLPTR));
        addCfgBtn->setText(QApplication::translate("MainWindow", "Add Configuration", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "Covert", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Mission Type", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MISSIONPLANNERY47240_H
