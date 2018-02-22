//
//  Divide.hpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef Divide_hpp
#define Divide_hpp

#include <stdio.h>
#include "operator.hpp"
class Divide : public Operator{
public:
    Divide();
    Divide(Base *,Base *);
    double evaluate();
};
#endif /* Divide_hpp */
