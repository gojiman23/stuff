//
//  add.cpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#include "add.hpp"
#include "Base.hpp"
#include "operator.hpp"
#include "Op.hpp"
Add::Add(){
    this -> left = 0;
    this -> right = 0;
}
Add::Add(Base *left,Base *right){
    this -> left = left;
    this -> right = right;
    this -> Base::data = this-> left -> evaluate() + this -> right -> evaluate();
}

double Add::evaluate(){
    return  this -> Base::data;
}
