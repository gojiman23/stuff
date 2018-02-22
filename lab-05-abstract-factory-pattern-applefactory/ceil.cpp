#include "ceil.h"
#include <math.h>
Ceil::Ceil(Base *data){
    this -> data = data -> evaluate();
}
double Ceil::evaluate(){
    return ceil(this -> data);
}

