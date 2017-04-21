/********************************************************************************
** Form generated from reading UI file 'waypointFormG20156.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef WAYPOINTFORMG20156_H
#define WAYPOINTFORMG20156_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WaypointDialog
{
public:
    QLabel *label_3;
    QCheckBox *cycleBox;
    QComboBox *orderCombo;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *slipEdit;
    QPushButton *addBtn;
    QListWidget *pointsList;
    QLabel *label_7;
    QLabel *label_9;
    QPushButton *cancelBtn;
    QPushButton *okBtn;
    QLineEdit *cptRadiusEdit;
    QLineEdit *repeatEdit;
    QLineEdit *speedEdit;
    QLineEdit *slipEdit_2;

    void setupUi(QDialog *WaypointDialog)
    {
        if (WaypointDialog->objectName().isEmpty())
            WaypointDialog->setObjectName(QStringLiteral("WaypointDialog"));
        WaypointDialog->resize(499, 450);
        label_3 = new QLabel(WaypointDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 67, 81, 20));
        cycleBox = new QCheckBox(WaypointDialog);
        cycleBox->setObjectName(QStringLiteral("cycleBox"));
        cycleBox->setGeometry(QRect(100, 317, 70, 17));
        orderCombo = new QComboBox(WaypointDialog);
        orderCombo->setObjectName(QStringLiteral("orderCombo"));
        orderCombo->setGeometry(QRect(100, 277, 69, 22));
        orderCombo->setMaxVisibleItems(3);
        label_6 = new QLabel(WaypointDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 277, 47, 13));
        label_4 = new QLabel(WaypointDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 117, 47, 13));
        label_5 = new QLabel(WaypointDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 147, 41, 16));
        slipEdit = new QLabel(WaypointDialog);
        slipEdit->setObjectName(QStringLiteral("slipEdit"));
        slipEdit->setGeometry(QRect(36, 187, 51, 20));
        addBtn = new QPushButton(WaypointDialog);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(330, 360, 75, 23));
        pointsList = new QListWidget(WaypointDialog);
        pointsList->setObjectName(QStringLiteral("pointsList"));
        pointsList->setGeometry(QRect(230, 67, 256, 281));
        label_7 = new QLabel(WaypointDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(320, 40, 51, 20));
        QFont font;
        font.setPointSize(14);
        label_7->setFont(font);
        label_9 = new QLabel(WaypointDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(140, 10, 181, 21));
        QFont font1;
        font1.setPointSize(16);
        label_9->setFont(font1);
        cancelBtn = new QPushButton(WaypointDialog);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(410, 410, 75, 23));
        okBtn = new QPushButton(WaypointDialog);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(330, 410, 75, 23));
        cptRadiusEdit = new QLineEdit(WaypointDialog);
        cptRadiusEdit->setObjectName(QStringLiteral("cptRadiusEdit"));
        cptRadiusEdit->setGeometry(QRect(90, 70, 113, 20));
        repeatEdit = new QLineEdit(WaypointDialog);
        repeatEdit->setObjectName(QStringLiteral("repeatEdit"));
        repeatEdit->setGeometry(QRect(90, 110, 113, 20));
        speedEdit = new QLineEdit(WaypointDialog);
        speedEdit->setObjectName(QStringLiteral("speedEdit"));
        speedEdit->setGeometry(QRect(90, 150, 113, 20));
        slipEdit_2 = new QLineEdit(WaypointDialog);
        slipEdit_2->setObjectName(QStringLiteral("slipEdit_2"));
        slipEdit_2->setGeometry(QRect(90, 190, 113, 20));

        retranslateUi(WaypointDialog);

        QMetaObject::connectSlotsByName(WaypointDialog);
    } // setupUi

    void retranslateUi(QDialog *WaypointDialog)
    {
        WaypointDialog->setWindowTitle(QApplication::translate("WaypointDialog", "Waypoint Behavior", Q_NULLPTR));
        label_3->setText(QApplication::translate("WaypointDialog", "Capture Radius", Q_NULLPTR));
        cycleBox->setText(QApplication::translate("WaypointDialog", "Cycle", Q_NULLPTR));
        label_6->setText(QApplication::translate("WaypointDialog", "Order", Q_NULLPTR));
        label_4->setText(QApplication::translate("WaypointDialog", "Repeat", Q_NULLPTR));
        label_5->setText(QApplication::translate("WaypointDialog", "Speed", Q_NULLPTR));
        slipEdit->setText(QApplication::translate("WaypointDialog", "Slip Radius", Q_NULLPTR));
        addBtn->setText(QApplication::translate("WaypointDialog", "Add Point", Q_NULLPTR));
        label_7->setText(QApplication::translate("WaypointDialog", "Points", Q_NULLPTR));
        label_9->setText(QApplication::translate("WaypointDialog", "Waypoint Behavior", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("WaypointDialog", "Cancel", Q_NULLPTR));
        okBtn->setText(QApplication::translate("WaypointDialog", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WaypointDialog: public Ui_WaypointDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WAYPOINTFORMG20156_H
