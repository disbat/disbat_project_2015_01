#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog7;
}

class Dialog7 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog7(QWidget *parent = 0);
    ~Dialog7();

private:
    Ui::Dialog7 *ui;

private slots:
    void addPoint();
    void removePoint();
};

#endif // DIALOG_H
