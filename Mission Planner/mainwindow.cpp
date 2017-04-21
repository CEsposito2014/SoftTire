#include "mainwindow.h"
#include "ui_MissionPlanner.h"
#include "BehaviorSelectDialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addBhvBtn_clicked()
{
    BehaviorSelectDialog bhvSelect = new BehaviorSelectDialog(this);
    bhvSelect.setModal(true);
    bhvSelect.exec();
}
