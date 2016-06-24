#include "widparallelform.h"
#include "ui_widparallelform.h"

WidParallelForm::WidParallelForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidParallelForm)
{
    ui->setupUi(this);
}

WidParallelForm::~WidParallelForm()
{
    delete ui;
}


void WidParallelForm::setArray(QString array){
    ui->textEdit->setText(array);
}
