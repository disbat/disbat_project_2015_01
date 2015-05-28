#include "dialog2.h"
#include "ui_dialog2.h"

Dialog2::Dialog2(QWidget *parent) :
   QDialog(parent),
   ui(new Ui::Dialog2)
{
   ui->setupUi(this);
   ui->lineEdit->setValidator (new QIntValidator());
   ui->lineEdit_2->setValidator (new QIntValidator());
}

Dialog2::~Dialog2()
{
delete ui;
}

void Dialog2::on_pushButton_clicked()
{
   double firstNumber, secondNumber;
   firstNumber = ui->lineEdit->text ().toDouble ();
   secondNumber = ui->lineEdit_2->text ().toDouble ();

   ui->lineEdit_3->setText (QString::number(firstNumber + secondNumber));
}
