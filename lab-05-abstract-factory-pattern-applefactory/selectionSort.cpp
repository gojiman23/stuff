//
//  selectionSort.cpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#include "selectionSort.hpp"
//#include "Sort.hpp"
//#include "Container.hpp"
//#include "Base.hpp"
#include <vector>
#include <list>
#include <typeinfo>
selectionSort::selectionSort(){}
void selectionSort::sort(Container *container){
        for (int i = 0; i<container -> toSort.size(); i++){
            int min = container -> toSort.at(i) -> evaluate();
            int minLoc = i;
            for (int j = i; j< container -> toSort.size(); j++){
                if (container -> toSort.at(j) -> evaluate() < min){
                    minLoc = j;
                    min = container -> toSort.at(j) -> evaluate();
                }
            }
            std::swap(container -> toSort.at(i),container -> toSort.at(minLoc));
        }
}
