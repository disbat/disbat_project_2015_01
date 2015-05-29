#include "dialog5.h"
#include "ui_dialog5.h"

Dialog5::Dialog5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog5)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),SLOT(division()));
}

Dialog5::~Dialog5()
{
    delete ui;
}

void Dialog5::division()
{
    ui->lineEdit_3->setText(QString::number(ui->lineEdit->text().toDouble() / ui->lineEdit_2->text().toDouble()));
}
