#ifndef HEXFACTORY_H
#define HEXFACTORY_H
#include "BaseFactory.h"
class HexFactory: public BaseFactory{
    public:
        HexFactory();
        BasePrint* generatePrint(double value);
};
#endif
