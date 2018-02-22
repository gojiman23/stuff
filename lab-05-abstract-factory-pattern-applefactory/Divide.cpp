//
//  Divide.cpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#include "Divide.hpp"
//#include "Base.hpp"
//#include "operator.hpp"
Divide::Divide(){
    this -> left = 0;
    this -> right = 0;
}
Divide::Divide(Base *left,Base *right){
    this -> left = left;
    this -> right = right;
    this -> Base::data = this -> left -> evaluate() / this -> right -> evaluate();
}
double Divide::evaluate(){
    return this -> Base::data;

}
