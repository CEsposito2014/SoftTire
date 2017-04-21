/********************************************************************************
** Form generated from reading UI file 'GPS_addi20156.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef GPS_ADDI20156_H
#define GPS_ADDI20156_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GPS_add
{
public:
    QLineEdit *latDegreeText;
    QLineEdit *latMinuteText;
    QLineEdit *latSecondText;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *longDegreeText;
    QLineEdit *longMinuteText;
    QLineEdit *longSecondText;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *cancelBtn;
    QPushButton *okBtn;
    QComboBox *latCardinalBox;
    QComboBox *longCardinalBox;

    void setupUi(QDialog *GPS_add)
    {
        if (GPS_add->objectName().isEmpty())
            GPS_add->setObjectName(QStringLiteral("GPS_add"));
        GPS_add->setWindowModality(Qt::WindowModal);
        GPS_add->resize(538, 235);
        GPS_add->setCursor(QCursor(Qt::ArrowCursor));
        GPS_add->setFocusPolicy(Qt::NoFocus);
        GPS_add->setModal(true);
        latDegreeText = new QLineEdit(GPS_add);
        latDegreeText->setObjectName(QStringLiteral("latDegreeText"));
        latDegreeText->setGeometry(QRect(130, 30, 113, 20));
        latMinuteText = new QLineEdit(GPS_add);
        latMinuteText->setObjectName(QStringLiteral("latMinuteText"));
        latMinuteText->setGeometry(QRect(130, 60, 113, 20));
        latSecondText = new QLineEdit(GPS_add);
        latSecondText->setObjectName(QStringLiteral("latSecondText"));
        latSecondText->setGeometry(QRect(130, 90, 113, 20));
        label = new QLabel(GPS_add);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 47, 13));
        label_2 = new QLabel(GPS_add);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 47, 13));
        label_3 = new QLabel(GPS_add);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 90, 47, 13));
        label_4 = new QLabel(GPS_add);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 130, 91, 21));
        label_5 = new QLabel(GPS_add);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 10, 47, 13));
        label_6 = new QLabel(GPS_add);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 10, 47, 13));
        longDegreeText = new QLineEdit(GPS_add);
        longDegreeText->setObjectName(QStringLiteral("longDegreeText"));
        longDegreeText->setGeometry(QRect(380, 40, 113, 20));
        longMinuteText = new QLineEdit(GPS_add);
        longMinuteText->setObjectName(QStringLiteral("longMinuteText"));
        longMinuteText->setGeometry(QRect(380, 70, 113, 20));
        longSecondText = new QLineEdit(GPS_add);
        longSecondText->setObjectName(QStringLiteral("longSecondText"));
        longSecondText->setGeometry(QRect(380, 100, 113, 20));
        label_7 = new QLabel(GPS_add);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 100, 47, 13));
        label_8 = new QLabel(GPS_add);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 40, 47, 13));
        label_9 = new QLabel(GPS_add);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(280, 70, 47, 13));
        label_10 = new QLabel(GPS_add);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(280, 130, 91, 21));
        cancelBtn = new QPushButton(GPS_add);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(430, 200, 75, 23));
        okBtn = new QPushButton(GPS_add);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(340, 200, 75, 23));
        latCardinalBox = new QComboBox(GPS_add);
        latCardinalBox->setObjectName(QStringLiteral("latCardinalBox"));
        latCardinalBox->setGeometry(QRect(130, 130, 69, 22));
        longCardinalBox = new QComboBox(GPS_add);
        longCardinalBox->setObjectName(QStringLiteral("longCardinalBox"));
        longCardinalBox->setGeometry(QRect(380, 130, 69, 22));

        retranslateUi(GPS_add);

        QMetaObject::connectSlotsByName(GPS_add);
    } // setupUi

    void retranslateUi(QDialog *GPS_add)
    {
        GPS_add->setWindowTitle(QApplication::translate("GPS_add", "Add GPS Point", Q_NULLPTR));
        label->setText(QApplication::translate("GPS_add", "Degrees", Q_NULLPTR));
        label_2->setText(QApplication::translate("GPS_add", "Minutes", Q_NULLPTR));
        label_3->setText(QApplication::translate("GPS_add", "Seconds", Q_NULLPTR));
        label_4->setText(QApplication::translate("GPS_add", "Cardinal Direction", Q_NULLPTR));
        label_5->setText(QApplication::translate("GPS_add", "Latitude", Q_NULLPTR));
        label_6->setText(QApplication::translate("GPS_add", "Longitude", Q_NULLPTR));
        label_7->setText(QApplication::translate("GPS_add", "Seconds", Q_NULLPTR));
        label_8->setText(QApplication::translate("GPS_add", "Degrees", Q_NULLPTR));
        label_9->setText(QApplication::translate("GPS_add", "Minutes", Q_NULLPTR));
        label_10->setText(QApplication::translate("GPS_add", "Cardinal Direction", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("GPS_add", "Cancel", Q_NULLPTR));
        okBtn->setText(QApplication::translate("GPS_add", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GPS_add: public Ui_GPS_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GPS_ADDI20156_H
