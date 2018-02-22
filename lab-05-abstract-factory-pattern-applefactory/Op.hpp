//
//  Op.hpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef Op_hpp
#define Op_hpp
#include "Base.hpp"
#include <stdio.h>
class Op : public Base{
public:
    Op(double data);
    double evaluate ();
};
#endif /* Op_hpp */
