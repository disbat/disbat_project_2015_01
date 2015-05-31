#include "dialog7.h"
#include "ui_dialog7.h"

Dialog7::Dialog7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog7)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),SLOT(addPoint()));
    connect(ui->pushButton_2,SIGNAL(clicked()),SLOT(removePoint()));
}

Dialog7::~Dialog7()
{
    delete ui;
}

void Dialog7::addPoint()
{
    ui->label->setText(ui->label->text() + ".");
}

void Dialog7::removePoint()
{
    if(ui->label->text().endsWith('.'))
    {
        ui->label->setText(ui->label->text().remove(ui->label->text().length()-1, 1));
    }
}
