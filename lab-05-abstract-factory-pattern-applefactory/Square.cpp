//
//  Square.cpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#include "Square.hpp"
//#include "Base.hpp"
//#include "operator.hpp"
Square::Square(){
    this -> left = 0;
    this -> right = 0;
}

Square::Square (Base *left){
    this ->left = left;
}

double Square::evaluate(){
    return  this -> left -> evaluate() * this -> left -> evaluate();
}
Square::~Square(){
    delete this;
}
