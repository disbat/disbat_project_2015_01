#ifndef dialog3_H
#define dialog3_H

#include <QDialog>

namespace Ui {
class Dialog3;
}

class Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3(QWidget *parent = 0);
    ~Dialog3();

private:
    Ui::Dialog3 *ui;

private slots:
    void division();
};

#endif // dialog3_H
