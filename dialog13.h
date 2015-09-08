#ifndef DIALOG13_H
#define DIALOG13_H

#include <QDialog>

namespace Ui {
class Dialog13;
}

class Dialog13 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog13(QWidget *parent = 0);
    virtual ~Dialog13();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();


private:
    Ui::Dialog13 *ui;
};

#endif // DIALOG13_H
