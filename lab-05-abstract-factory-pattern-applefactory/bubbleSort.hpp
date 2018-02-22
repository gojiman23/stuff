//
//  bubbleSort.hpp
//  lab3
//
//  Created by james luo on 10/25/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef bubbleSort_hpp
#define bubbleSort_hpp

#include <stdio.h>
#include "Base.hpp"
#include "Container.hpp"
#include "Sort.hpp"
class bubbleSort :public Sort{
    public:
    bubbleSort();
    void sort(Container *container);
};
#endif /* bubbleSort_hpp */
