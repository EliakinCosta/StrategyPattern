#include "bubblesortordenation.h"

#include <QList>

BubbleSortOrdenation::BubbleSortOrdenation()
{

}

QList<int> BubbleSortOrdenation::order(QList<int> numbers)
{
    for (int i = numbers.length()-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
           if (numbers.at(j) > numbers.at(j+1))
           {
               int aux = numbers[j];
               numbers[j] = numbers[j+1];
               numbers[j+1] = aux;
           }
        }
    }
    return numbers;
}
