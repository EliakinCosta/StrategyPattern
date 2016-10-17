#include "insertionsortordenation.h"

#include <QList>

InsertionSortOrdenation::InsertionSortOrdenation()
{

}

QList<int> InsertionSortOrdenation::order(QList<int> numbers)
{
    int i, j, atual;

        for (i = 1; i < numbers.length(); i++)
        {
            atual = numbers[i];
            j = i - 1;

            while ((j >= 0) && (atual < numbers[j]))
            {
                numbers[j + 1] = numbers[j];
                j = j - 1;
            }

            numbers[j + 1] = atual;
        }

        return numbers;
}
