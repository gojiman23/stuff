#ifndef BINARYFACTORY_H
#define BINARYFACTORY_H
#include "BaseFactory.h"
class BinaryFactory: public BaseFactory{
    public:
        BinaryFactory();
        BasePrint* generatePrint(double value);
};
#endif
