//
//  bubbleSort.cpp
//  lab3
//
//  Created by james luo on 10/25/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#include "bubbleSort.hpp"
#include "Base.hpp"
#include <vector>
bubbleSort::bubbleSort(){
}
void bubbleSort::sort(Container *container){
    for (int i = 0; i<container -> toSort.size(); i++){
        int min = container -> toSort.at(i) -> evaluate();
        for (int j = i; j< container -> toSort.size(); j++){
            if (container -> toSort.at(j) -> evaluate() < min){
                min = container -> toSort.at(i) -> evaluate();
                std::swap(container -> toSort.at(i),container -> toSort.at(j));
            }
        }

    }
}
