#include <QCoreApplication>
#include <QList>
#include <QDebug>

#include "ordenationstrategy.h"
#include "bubblesortordenation.h"
#include "insertionsortordenation.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> numbers;
    numbers << 90 << 2 << 3 << 7 <<5 << 52 << 32 << 23;

    OrdenationStrategy *ordenationStrategy = new BubbleSortOrdenation;
    qDebug() << "BubbleSort" << ordenationStrategy->order(numbers);

    qDebug() << "Desordenado" << numbers;

    ordenationStrategy = new InsertionSortOrdenation;
    qDebug() << "InsertionSort" << ordenationStrategy->order(numbers);

    return 0;
}

