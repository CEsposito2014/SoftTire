/********************************************************************************
** Form generated from reading UI file 'BehaviorSelecta20156.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef BEHAVIORSELECTA20156_H
#define BEHAVIORSELECTA20156_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

#include "BehaviorList.h"

QT_BEGIN_NAMESPACE

class Ui_BhvSelectDialog
{
public:
    QListWidget *behaviorList;
    QCheckBox *deployBox;
    QTextEdit *nameEdit;
    QCheckBox *returnBox;
    QLabel *label;
    QTextEdit *pwtEdit;
    QLabel *label_2;
    QPushButton *NextBtn;
    QPushButton *CancelBtn;
    QLabel *label_3;
    BehaviorList bhvNames;

    void setupUi(QDialog *BhvSelectDialog)
    {
        if (BhvSelectDialog->objectName().isEmpty())
            BhvSelectDialog->setObjectName(QStringLiteral("BhvSelectDialog"));
        BhvSelectDialog->resize(480, 419);
        behaviorList = new QListWidget(BhvSelectDialog);
        behaviorList->setObjectName(QStringLiteral("behaviorList"));
        behaviorList->setGeometry(QRect(10, 40, 201, 371));
        deployBox = new QCheckBox(BhvSelectDialog);
        deployBox->setObjectName(QStringLiteral("deployBox"));
        deployBox->setGeometry(QRect(220, 100, 70, 17));
        nameEdit = new QTextEdit(BhvSelectDialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(270, 10, 191, 31));
        returnBox = new QCheckBox(BhvSelectDialog);
        returnBox->setObjectName(QStringLiteral("returnBox"));
        returnBox->setGeometry(QRect(290, 100, 70, 17));
        label = new QLabel(BhvSelectDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 60, 47, 13));
        pwtEdit = new QTextEdit(BhvSelectDialog);
        pwtEdit->setObjectName(QStringLiteral("pwtEdit"));
        pwtEdit->setGeometry(QRect(270, 50, 191, 31));
        label_2 = new QLabel(BhvSelectDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 20, 47, 13));
        NextBtn = new QPushButton(BhvSelectDialog);
        NextBtn->setObjectName(QStringLiteral("NextBtn"));
        NextBtn->setGeometry(QRect(320, 380, 75, 23));
        CancelBtn = new QPushButton(BhvSelectDialog);
        CancelBtn->setObjectName(QStringLiteral("CancelBtn"));
        CancelBtn->setGeometry(QRect(400, 380, 75, 23));
        label_3 = new QLabel(BhvSelectDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 10, 81, 21));
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);

        behaviorList->SingleSelection;
        behaviorList->SelectItems;
        for (int i = 0; i < bhvNames.getLength(); i++)
        {
            QListWidgetItem *item = new QListWidgetItem;
            item->setText(bhvNames.getName(i).c_str());
            behaviorList->insertItem(i, item);
        }

        retranslateUi(BhvSelectDialog);

        QMetaObject::connectSlotsByName(BhvSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *BhvSelectDialog)
    {
        BhvSelectDialog->setWindowTitle(QApplication::translate("BhvSelectDialog", "Behavior Selection", Q_NULLPTR));
        deployBox->setText(QApplication::translate("BhvSelectDialog", "Deploy", Q_NULLPTR));
        returnBox->setText(QApplication::translate("BhvSelectDialog", "Return", Q_NULLPTR));
        label->setText(QApplication::translate("BhvSelectDialog", "PWT", Q_NULLPTR));
        pwtEdit->setPlaceholderText(QString());
        label_2->setText(QApplication::translate("BhvSelectDialog", "Name", Q_NULLPTR));
        NextBtn->setText(QApplication::translate("BhvSelectDialog", "Next", Q_NULLPTR));
        CancelBtn->setText(QApplication::translate("BhvSelectDialog", "Cancel", Q_NULLPTR));
        label_3->setText(QApplication::translate("BhvSelectDialog", "Behavior", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BhvSelectDialog: public Ui_BhvSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BEHAVIORSELECTA20156_H
