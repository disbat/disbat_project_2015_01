#include "dialog3.h"
#include "ui_dialog3.h"

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),SLOT(division()));
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::division()
{
    ui->lineEdit_3->setText(QString::number(ui->lineEdit->text().toDouble() - ui->lineEdit_2->text().toDouble()));
}
