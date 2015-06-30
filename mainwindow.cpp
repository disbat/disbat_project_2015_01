#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),SLOT(changeText()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeText()
{
    QMessageBox message;
    message.setText(QString::fromUtf8("Поміняти тескти місцями?"));
    message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    int k = message.exec();
    if(k == QMessageBox::Ok)
    {
        QString temp = ui->lineEdit->text();
        ui->lineEdit->setText(ui->lineEdit_2->text());
        ui->lineEdit_2->setText(temp);
    }
}
