#include "dialog8.h"
#include "ui_dialog8.h"

Dialog8::Dialog8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog8)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),SLOT(inHead()));
}

Dialog8::~Dialog8()
{
    delete ui;
}

void Dialog8::inHead()
{
    setWindowTitle(ui->lineEdit->text());
}
