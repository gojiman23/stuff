#include "abs.h"
#include <math.h>
Abs::Abs(Base *data){
    this -> data = data -> evaluate();
}
double Abs::evaluate(){
    return abs(this -> data);
}

