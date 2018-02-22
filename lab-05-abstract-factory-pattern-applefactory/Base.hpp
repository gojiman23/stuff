//
//  Base.hpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef Base_hpp
#define Base_hpp

#include <stdio.h>
class Base{
    enum {Op,Operator};
    
public:
    double data;
    virtual double evaluate () = 0;
    ~Base(){}
    
};
#endif /* Base_hpp */
