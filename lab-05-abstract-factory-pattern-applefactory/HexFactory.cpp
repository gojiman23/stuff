#include "HexFactory.h"
HexFactory::HexFactory(){
}
BasePrint* HexFactory::generatePrint(double value){
    HexPrint *newBase = new HexPrint(double value);
    return newBase;
}
