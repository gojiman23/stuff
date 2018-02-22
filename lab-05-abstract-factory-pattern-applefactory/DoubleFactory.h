#ifndef DOUBLEFACTORY_H
#define DOUBLEFACTORY_H
#include "BaseFactory.h"
class DoubleFactory :public BaseFactory{
    public:
        DoubleFactory();
        BasePrint* generatePrint(double value);

};
#endif

