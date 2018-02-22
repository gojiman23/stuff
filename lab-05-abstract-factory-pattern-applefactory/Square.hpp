//
//  Square.hpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef Square_hpp
#define Square_hpp

#include <stdio.h>
//#include "Base.hpp"
#include "operator.hpp"
class Square: public Operator{
public:
    Square();
    Square(Base *);
    double evaluate();
    ~Square();
};
#endif /* Square_hpp */
