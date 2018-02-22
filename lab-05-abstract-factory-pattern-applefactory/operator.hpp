//
//  operator.hpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef operator_hpp
#define operator_hpp

#include <stdio.h>
#include "Base.hpp"
class Operator :public Base{
    enum {Add,Subtract,Multiply,Divide,Square};

public:
    Base *left;
    Base *right;
    virtual double evaluate() = 0;
};
#endif /* operator_hpp */
