#include "dialog1.h"
#include "ui_dialog1.h"

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::changeEvent(QEvent *e)
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

void Dialog1::on_buttonRed_clicked()
{
    ui->label->setStyleSheet("QLabel { font-size: 6px }");
}

void Dialog1::on_buttonBlue_clicked()
{
    ui->label->setStyleSheet("QLabel { font-size: 26px }");
}
