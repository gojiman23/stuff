//
//  selectionSort.hpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef selectionSort_hpp
#define selectionSort_hpp

#include <stdio.h>
#include "Sort.hpp"
//#include "Container.hpp"
class selectionSort : public Sort{
public:
    selectionSort();
    void sort(Container *container);
};
#endif /* selectionSort_hpp */
