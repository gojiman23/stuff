//
//  subtract.hpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef subtract_hpp
#define subtract_hpp
#include "operator.hpp"
//#include "Base.hpp"
#include <stdio.h>
class Subtract :public Operator{
public:
    Subtract();
    Subtract(Base *, Base *);
    ~Subtract();
    double evaluate();
};
#endif /* subtract_hpp */
