//
//  Sort.hpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef Sort_hpp
#define Sort_hpp

#include <stdio.h>
#include "Container.hpp"

class Sort{
enum{selectionSort,bubbleSort};
public:
    Sort();
    virtual void sort(Container *container) = 0;
};
#endif /* Sort_hpp */
