//
//  Multiply.hpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef Multiply_hpp
#define Multiply_hpp

#include <stdio.h>
#include "operator.hpp"
#include "Base.hpp"
class Multiply : public Operator{
public:
    Multiply();
    Multiply(Base *, Base *);
    ~Multiply();
    double evaluate();
};
#endif /* Multiply_hpp */
