#include "dialog6.h"
#include "ui_dialog6.h"

Dialog6::Dialog6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog6)
{
    ui->setupUi(this);
}

Dialog6::~Dialog6()
{
    delete ui;
}

void Dialog6::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog6::on_buttonRed_clicked()
{
    ui->label->setStyleSheet("QLabel { font-size: 6px }");
}

void Dialog6::on_buttonBlue_clicked()
{
    ui->label->setStyleSheet("QLabel { font-size: 26px }");
}
