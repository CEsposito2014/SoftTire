#pragma once
#ifndef BEHAVIORSELECTDIALOG_H
#define BEHAVIORSELECTDIALOG_H

#include "ui_BehaviorSelect.h"
#include "MoosBhvBuilder.h"
#include "BehaviorList.h"
#include "WaypointBhv.h"
#include "WaypointForm.h"


class BehaviorSelectDialog : public QDialog
{
    Q_OBJECT

public:
    BehaviorSelectDialog(QWidget *parent = 0);
    ~BehaviorSelectDialog();

private:
    Ui::BhvSelectDialog *bhvDialog;
    BehaviorList bhvNames;


public slots:
    void on_NextBtn_clicked();
    void on_CancelBtn_clicked();

};
#endif // !BEHAVIORSELECTDIALOG_H