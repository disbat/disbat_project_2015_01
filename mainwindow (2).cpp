#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),SLOT(division()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::division()
{
    ui->lineEdit_3->setText(QString::number(ui->lineEdit->text().toDouble() / ui->lineEdit_2->text().toDouble()));
}
