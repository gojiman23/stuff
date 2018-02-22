#include "floor.h"
#include <math.h>
Floor::Floor(Base *data){
    this -> data = data -> evaluate();
}
double Floor::evaluate(){
    return floor(this -> data);
}

