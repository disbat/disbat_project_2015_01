#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QVBoxLayout>
#include <QSpacerItem>

#include "dialog1.h"
#include "dialog2.h"
#include "dialog4.h"
#include "dialog5.h"
#include "dialog9.h"
#include "dialog10.h"
#include "dialog11.h"
#include "dialog3.h"
#include "dialog6.h"
#include "dialog8.h"
#include "dialog7.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVBoxLayout *layout = new QVBoxLayout(this);

    // Dialog 1.
    QPushButton *buttonDialog1 = new QPushButton(this);
    buttonDialog1->setText(tr("Dialog 1. Example."));
    layout->addWidget(buttonDialog1);
    connect(buttonDialog1, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog1_clicked()));

   //Dialog 2.
    QPushButton *buttonDialog2 = new QPushButton(this);
    buttonDialog2->setText(tr("Semko Evgeniy  #2"));
    layout->addWidget(buttonDialog2);
    connect(buttonDialog2, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog2_clicked()));

    // Dialog 3.
    QPushButton *buttonDialog3 = new QPushButton(this);
    buttonDialog3->setText(tr("Sergii Melnyk #3"));
    layout->addWidget(buttonDialog3);
    connect(buttonDialog3, SIGNAL(clicked()), this, SLOT(on_buttonDialog3_clicked()));

    //Dialog 4.
    QPushButton *buttonDialog4 = new QPushButton(this);
    buttonDialog4->setText(tr("Maryana Smirnova #4"));
    layout->addWidget(buttonDialog4);
    connect(buttonDialog4, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog4_clicked()));

    //Dialog 5.
    QPushButton *buttonDialog5 = new QPushButton(this);
    buttonDialog5->setText(tr("Dialog 5. Hripkov Igor"));
    layout->addWidget(buttonDialog5);
    connect(buttonDialog5, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog5_clicked()));

    //Dialog 6.
    QPushButton *buttonDialog6 = new QPushButton(this);
    buttonDialog6->setText(tr("Dialog 6. Nosadchuk Roman"));
    layout->addWidget(buttonDialog6);
    connect(buttonDialog6, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog6_clicked()));

    //Dialog 7.
    QPushButton *buttonDialog7 = new QPushButton(this);
    buttonDialog7->setText(QString::fromUtf8("Dialog 7. Сергей ✔ Быченко"));
    layout->addWidget(buttonDialog7);
    connect(buttonDialog7, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog7_clicked()));

    //Dialog 8.
    QPushButton *buttonDialog8 = new QPushButton(this);
    buttonDialog8->setText(QString::fromUtf8("Dialog 8. Евгений Деркач"));
    layout->addWidget(buttonDialog8);
    connect(buttonDialog8, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog8_clicked()));

    //Dialog 9.
    QPushButton *buttonDialog9 = new QPushButton(this);
    buttonDialog9->setText(tr("Marina Skrivanik #9"));
    layout->addWidget(buttonDialog9);
    connect(buttonDialog9, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog9_clicked()));

    //Dialog 10.
    QPushButton *buttonDialog10 = new QPushButton(this);
    buttonDialog10->setText(tr("Fisun Inna #10"));
    layout->addWidget(buttonDialog10);
    connect(buttonDialog10, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog10_clicked()));

    // Anton Mitrofanov
    QPushButton *buttonDialog11 = new QPushButton(this);
    buttonDialog11->setText(tr("Anton Mitrofanov #11"));
    layout->addWidget(buttonDialog11);
    connect(buttonDialog11, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog11_clicked()));

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

void MainWindow::on_buttonDialog6_clicked()
{
   Dialog6 *dialog6 = new Dialog6(this);
   dialog6->exec();
}

void MainWindow::on_buttonDialog9_clicked()
{
   Dialog9 *dialog9 = new Dialog9(this);
   dialog9->exec();
}

void MainWindow::on_buttonDialog10_clicked()
{
   Dialog10 *dialog10 = new Dialog10(this);
   dialog10->exec();
}

void MainWindow::on_buttonDialog11_clicked()
{
   Dialog11 *dialog11 = new Dialog11(this);
   dialog11->exec();
}

void MainWindow::on_buttonDialog3_clicked()
{
    Dialog3 *dialog = new Dialog3(this);
    dialog->exec();
}

void MainWindow::on_buttonDialog8_clicked()
{
   Dialog8 *dialog8 = new Dialog8(this);
   dialog8->exec();
}

void MainWindow::on_buttonDialog7_clicked()
{
   Dialog7 *dialog7 = new Dialog7(this);
   dialog7->exec();
}
