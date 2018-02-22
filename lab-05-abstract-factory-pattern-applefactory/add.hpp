//
//  add.hpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef add_hpp
#define add_hpp
#include "operator.hpp"
#include <stdio.h>
class Add :public Operator{
public:
    Add();
    Add(Base*,Base*);
    double evaluate();
};
#endif /* add_hpp */
