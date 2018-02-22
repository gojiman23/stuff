//
//  subtract.cpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#include "subtract.hpp"
//#include "operator.hpp"
Subtract::Subtract(){
}
Subtract::Subtract(Base *left, Base *right){
    this -> left = left;
    this -> right = right;
    this -> Base::data = this-> left -> evaluate() - this -> right -> evaluate();
}
double Subtract::evaluate(){
    return  this -> Base::data;
}
