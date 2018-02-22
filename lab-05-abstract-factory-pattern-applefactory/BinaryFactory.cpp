#include "BinaryFactory.h"
BinaryFactory::BinaryFactory(){
}
BasePrint* BinaryFactory::generatePrint(double value){
    BinaryPrint *newBase = new BinaryPrint(value);
    return newBase;
}
