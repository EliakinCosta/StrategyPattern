#ifndef ORDENATIONSTRATEGY_H
#define ORDENATIONSTRATEGY_H

template<typename>
class QList;

class OrdenationStrategy
{
public:
    OrdenationStrategy();
    virtual ~OrdenationStrategy(){}
    virtual QList<int> order(QList<int> numbers) = 0;
};

#endif // ORDENATIONSTRATEGY_H
