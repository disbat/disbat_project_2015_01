#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QVBoxLayout>
#include <QSpacerItem>

#include "dialog1.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVBoxLayout *layout = new QVBoxLayout(this);

    // Dialog 1. Example.
    QPushButton *buttonDialog1 = new QPushButton(this);
    buttonDialog1->setText(tr("Dialog 1. Example."));
    layout->addWidget(buttonDialog1);
    connect(buttonDialog1, SIGNAL(clicked(bool)), this, SLOT(on_buttonDialog1_clicked()));

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
