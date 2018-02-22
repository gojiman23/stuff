//
//  Multiply.cpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#include "Multiply.hpp"
//#include "operator.hpp"
//#include "Base.hpp"

Multiply::Multiply(){
    this -> left = 0;
    this -> right = 0;
}
Multiply::Multiply(Base *left, Base *right){
    this -> left = left;
    this -> right = right;
    this -> Base::data = this -> left  -> evaluate() * this -> right -> evaluate();
}

double Multiply::evaluate(){
    return  this -> Base::data;
}
Multiply::~Multiply(){
    delete this;
}
