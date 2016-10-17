#ifndef INSERTIONSORTORDENATION_H
#define INSERTIONSORTORDENATION_H

#include "ordenationstrategy.h"

template<typename>
class QList;

class InsertionSortOrdenation : public OrdenationStrategy
{
public:
    InsertionSortOrdenation();
    virtual ~InsertionSortOrdenation(){}
    virtual QList<int> order(QList<int> numbers);
};

#endif // INSERTIONSORTORDENATION_H
