#include "dialog10.h"
#include "ui_dialog10.h"

Dialog10::Dialog10(QWidget *parent) :
   QDialog(parent),
   ui(new Ui::Dialog10)
{
    ui->setupUi(this);
}

Dialog10::~Dialog10()
{
delete ui;
}

void Dialog10::on_pushButton_clicked()
{
    this->close();
}
