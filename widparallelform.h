#ifndef WIDPARALLELFORM_H
#define WIDPARALLELFORM_H

#include <QWidget>

namespace Ui {
class WidParallelForm;
}

class WidParallelForm : public QWidget
{
    Q_OBJECT

public:
    explicit WidParallelForm(QWidget *parent = 0);
    ~WidParallelForm();

    void setArray(QString array);

private:
    Ui::WidParallelForm *ui;
};

#endif // WIDPARALLELFORM_H
