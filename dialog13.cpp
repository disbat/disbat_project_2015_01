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


void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton_2->hide();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->pushButton_3->hide();
}
