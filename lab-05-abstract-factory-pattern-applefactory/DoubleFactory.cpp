#include "DoubleFactory.h"
DoubleFactory::DoubleFactory(){}
BasePrint* generatePrint(double value){
    DoublePrint *newBase = new DoublePrint(double value);
    return newBase;
}
