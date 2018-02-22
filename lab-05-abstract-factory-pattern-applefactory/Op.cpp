//
//  Op.cpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#include "Op.hpp"
//#include "Base.hpp"
Op::Op(double data){
    this -> data = data;
}

double Op::evaluate(){
    return this -> data;
}
