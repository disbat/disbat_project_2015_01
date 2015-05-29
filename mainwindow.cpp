#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QVBoxLayout>
#include <QSpacerItem>

#include "dialog1.h"
#include "dialog2.h"
#include "dialog4.h"
#include "dialog5.h"
<<<<<<< HEAD
#include "dialog6.h"
=======
#include "dialog10.h"
>>>>>>> 8182197c737ae6a2833a200d3eeb852fff34ae46

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVBoxLayout *layout = new QVBoxLayout(this);

    // Dialog 1. Example.
    QPushButton *buttonDialog1 = new QPushButton(this);
    buttonDialog1->setText(tr("Nosadchuk Roman #6"));
    layout->addWidget(buttonDialog1);
    connect(buttonDialog1, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog1_clicked()));

   //Dialog 2.
    QPushButton *buttonDialog2 = new QPushButton(this);
    buttonDialog2->setText(tr("Dialog 2.Семко Евгеній  #2 make doc"));
    layout->addWidget(buttonDialog2);
    connect(buttonDialog2, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog2_clicked()));
    //Dialog 4.
    QPushButton *buttonDialog4 = new QPushButton(this);
    buttonDialog4->setText(tr("Maryana Smirnova #4"));
    layout->addWidget(buttonDialog4);
    connect(buttonDialog4, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog4_clicked()));

    layout->addSpacerItem(new QSpacerItem(10, 10, QSizePolicy::Maximum, QSizePolicy::Expanding));
    ui->centralWidget->setLayout(layout);
    //Dialog 5.
    QPushButton *buttonDialog5 = new QPushButton(this);
    buttonDialog5->setText(tr("Dialog 5. Хріпков Ігор"));
    layout->addWidget(buttonDialog5);
    connect(buttonDialog5, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog5_clicked()));

<<<<<<< HEAD
     //Dialog 6.
    QPushButton *buttonDialog6 = new QPushButton(this);
    buttonDialog6->setText(tr("Dialog 6. Nosadchuk Roman"));
    layout->addWidget(buttonDialog6);
    connect(buttonDialog6, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog6_clicked()));
=======
    //Dialog 10.
    QPushButton *buttonDialog10 = new QPushButton(this);
    buttonDialog10->setText(tr("Fisun Inna #10"));
    layout->addWidget(buttonDialog10);
    connect(buttonDialog10, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog10_clicked()));
>>>>>>> 8182197c737ae6a2833a200d3eeb852fff34ae46

    layout->addSpacerItem(new QSpacerItem(10, 10, QSizePolicy::Maximum, QSizePolicy::Expanding));
    ui->centralWidget->setLayout(layout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_buttonDialog1_clicked()
{
    Dialog1 *dialog = new Dialog1(this);
    dialog->exec();
}

void MainWindow::on_buttonDialog2_clicked()
{
   Dialog2 *dialog2 = new Dialog2(this);
   dialog2->exec();
}

void MainWindow::on_buttonDialog4_clicked()
{
   Dialog4 *dialog4 = new Dialog4(this);
   dialog4->exec();
}

void MainWindow::on_buttonDialog5_clicked()
{
   Dialog5 *dialog5 = new Dialog5(this);
   dialog5->exec();
}

<<<<<<< HEAD
void MainWindow::on_buttonDialog6_clicked()
{
   Dialog6 *dialog6 = new Dialog6(this);
   dialog6->exec();
=======
void MainWindow::on_buttonDialog10_clicked()
{
   Dialog10 *dialog10 = new Dialog10(this);
   dialog10->exec();
>>>>>>> 8182197c737ae6a2833a200d3eeb852fff34ae46
}
