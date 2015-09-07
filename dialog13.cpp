#include "dialog13.h"
#include "ui_dialog13.h"

Dialog13::Dialog13(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog13)
{
    ui->setupUi(this);

}

Dialog13::~Dialog13()
{
    delete ui;
}


void Dialog13::on_pushButton_1_clicked()
{
    ui->pushButton_1->hide();
}

void Dialog13::on_pushButton_2_clicked()
{
    ui->pushButton_2->hide();
}

void Dialog13::on_pushButton_3_clicked()
{
    ui->pushButton_3->hide();
}

void Dialog13::on_pushButton_4_clicked()
{
    ui->pushButton_4->hide();
}

void Dialog13::on_pushButton_5_clicked()
{
    ui->pushButton_5->hide();
}

void Dialog13::on_pushButton_6_clicked()
{
    ui->pushButton_6->hide();
}

void Dialog13::on_pushButton_7_clicked()
{
    ui->pushButton_7->hide();
}

void Dialog13::on_pushButton_8_clicked()
{
    ui->pushButton_8->hide();
}

void Dialog13::on_pushButton_9_clicked()
{
    ui->pushButton_9->hide();
}

