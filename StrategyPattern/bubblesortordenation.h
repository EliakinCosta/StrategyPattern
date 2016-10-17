#ifndef BUBBLESORTORDENATION_H
#define BUBBLESORTORDENATION_H

#include "ordenationstrategy.h"

template<typename>
class QList;

class BubbleSortOrdenation : public OrdenationStrategy
{
public:
    BubbleSortOrdenation();
    virtual ~BubbleSortOrdenation(){}
    virtual QList<int> order(QList<int> numbers);
};

#endif // BUBBLESORTORDENATION_H
