#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;

private slots:
    void on_buttonDialog1_clicked();
    void on_buttonDialog2_clicked();
    void on_buttonDialog5_clicked();
    void on_buttonDialog6_clicked();
};

#endif // MAINWINDOW_H
