#include "dialog4.h"
#include "ui_dialog4.h"

Dialog4::Dialog4(QWidget *parent) :
   QDialog(parent),
   ui(new Ui::Dialog4)
{
   ui->setupUi(this);
   ui->lineEdit_1->setValidator (new QIntValidator());
   ui->lineEdit_3->setValidator (new QIntValidator());
}

Dialog4::~Dialog4()
{
delete ui;
}

void Dialog4::on_pushButton_clicked()
{
   double firstNumber1, secondNumber1;
   firstNumber1 = ui->lineEdit_1->text ().toDouble ();
   secondNumber1 = ui->lineEdit_3->text ().toDouble ();

   ui->lineEdit_4->setText (QString::number(firstNumber1 * secondNumber1));
}
