#include "dialog9.h"
#include "ui_dialog9.h"
#include <QMessageBox>

Dialog9::Dialog9(QWidget *parent) :
   QDialog(parent),
   ui(new Ui::Dialog9)
{
ui->setupUi(this);
}

Dialog9::~Dialog9()
{
delete ui;
}

void Dialog9::on_pushButton_clicked()
{
   QString str = ui->textEdit->toPlainText ();
   QMessageBox msgBox;
   msgBox.setWindowTitle ("Massage Box");
   msgBox.setText(str);
   msgBox.exec();
}
