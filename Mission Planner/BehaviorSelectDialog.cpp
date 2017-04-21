#include "BehaviorSelectDialog.h"

BehaviorSelectDialog::BehaviorSelectDialog(QWidget *parent) : QDialog(parent), bhvDialog(new Ui::BhvSelectDialog)
{
    bhvDialog->setupUi(this);

}

BehaviorSelectDialog::~BehaviorSelectDialog()
{
    delete bhvDialog;
}

void BehaviorSelectDialog::on_CancelBtn_clicked()
{
    this->done(0);
}

void BehaviorSelectDialog::on_NextBtn_clicked()
{
    std::string behaviorSelection = bhvDialog->behaviorList->currentItem()->text().toStdString();
    
    std::string name = bhvDialog->nameEdit->toPlainText().toStdString();
    int pwt = bhvDialog->pwtEdit->toPlainText().toInt();
    bool returnFlag = bhvDialog->returnBox->isChecked();
    bool deployFlag = bhvDialog->deployBox->isChecked();


    if (behaviorSelection.compare(bhvNames.BehaviorNames.at(0)) == 0)
    {
        WaypointBhv *waypoint = new WaypointBhv(name, deployFlag, returnFlag, pwt);
        WaypointForm *waypointDialog = new WaypointForm(this);
        waypointDialog->setBhv(waypoint);
        waypointDialog->setModal(true);
        waypointDialog->exec();
        this->done(0);
    }
    else if (behaviorSelection.compare(bhvNames.BehaviorNames.at(1)))
    {

    }
}