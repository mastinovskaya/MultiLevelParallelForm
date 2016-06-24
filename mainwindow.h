#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "widparallelform.h"
#include "listgraph.h"

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

private:
    Ui::MainWindow *ui;
    int arraySize;
    int currentSize;
    int counterColums;
    int arrayWithoutWeight[144] = {
                               0,0,1,0,0,0,1,0,0,0,0,0,
                               0,0,0,1,0,1,0,0,0,0,0,0,
                               0,0,0,0,0,0,1,1,0,0,0,0,
                               0,0,0,0,0,0,0,0,1,0,0,0,
                               0,0,0,0,0,0,0,1,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,1,0,0,
                               0,0,0,0,0,0,0,0,0,0,1,0,
                               0,0,0,0,0,0,0,0,0,0,0,1,
                               0,0,0,0,0,0,0,0,0,0,0,1,
                               0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0};


    int arrayWeight[12] = {2, 4, 5, 7, 6, 3, 9, 8, 3, 1, 7, 5};
    int arrayANDWeight[157] = {0,0,1,0,0,0,1,0,0,0,0,0,2,
                               0,0,0,1,0,1,0,0,0,0,0,1,4,
                               0,0,0,0,0,0,1,1,0,0,0,0,5,
                               0,0,0,0,0,0,0,0,1,0,0,0,7,
                               0,0,0,0,0,0,0,0,0,0,0,0,6,
                               0,0,0,0,0,0,0,0,0,0,0,0,3,
                               0,0,0,0,0,0,0,0,0,1,0,0,9,
                               0,0,0,0,0,0,0,0,0,0,1,0,8,
                               0,0,0,0,0,0,0,0,0,0,0,1,3,
                               0,0,0,0,0,0,0,0,0,0,0,1,1,
                               0,0,0,0,0,0,0,0,0,0,0,0,7,
                               0,0,0,0,0,0,0,0,0,0,0,0,5};
    int array[12][12];
    int arrayColums[24];
    int level;
    int counter;
    WidParallelForm widParallelForm;

    bool validateRepetition(int element);
    void toParallelForm();
    void earlyStartFinish();

private slots:
    void inputArraySize();
    void withoutWeight();
};

#endif // MAINWINDOW_H
