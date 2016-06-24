#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    arraySize = 1;
    level = 0;
    counter = 0;

    connect(ui->startButton, SIGNAL (clicked(bool)), this,  SLOT (inputArraySize())  );
    connect(ui->startButton, SIGNAL (clicked(bool)), this,  SLOT (ArrayTable())  );
}

MainWindow::~MainWindow(){
    delete ui;
}


void MainWindow::inputArraySize(){

    arraySize = ui->lineEditArraySize->text().toInt();

    withoutWeight();
    toParallelForm();

    widParallelForm.show();
    widParallelForm.setArray(outString);
}


void MainWindow::withoutWeight(){
    for (int i=0; i<arraySize; i++)
        for (int j=0; j<arraySize; j++)
                array[i][j] = arrayWithoutWeight[i*arraySize + j];
}

void Print(const Graph & g){ //для проверки графа
    int n = g.CountVertex();
    for (int i=0; i<n; i++){
        for (int j = 0; j < n; j++){
            qDebug() << (g.HasArc(i, j) ? '1' : '0') << ' ';
        }
        qDebug() << endl;
    }

}
void MainWindow::toParallelForm(){

    int nullCounter = 0;
    int curNullColums[arraySize];

    counterColums = 0;
    currentSize = arraySize;

    ListGraph listGraph(arraySize);

    QString str = "";
    for (int i = 0; i<14; i++ )
        arrayColums[i] = -1;

    do{
        for (int j=0; j<arraySize; j++){
                for (int i=0; i<arraySize; i++)
                {
                                if ( (validateRepetition(i) == false)&& (validateRepetition(j) == false) && (array[i][j] == 0)  )
                                {
                                        nullCounter++;
                                        if (nullCounter == currentSize){
                                                curNullColums[counterColums] = j;
                                                outString = outString + str.setNum(j+1) + "  ";
                                                counterColums++;
                                        }
                                }
                }
                nullCounter = 0;
        }
        for (int n=0; n < counterColums; n++){
                arrayColums[counter] = curNullColums[n];
                listGraph.AddArc(level, curNullColums[n]);
                counter++;
        }
        level++;
        outString = outString + "\n";
        currentSize = currentSize - counterColums;
        counterColums = 0;

    } while (currentSize > 0);

    Print(listGraph);
}

bool MainWindow::validateRepetition(int element){
    for (int m=0; m < 14; m++)
        if( arrayColums[m] == element)
            return true;
    return false;
}

void MainWindow::earlyStartFinish(){
    int arEarlyStart[arraySize];
    int arEarlyFinish[arraySize];
}
