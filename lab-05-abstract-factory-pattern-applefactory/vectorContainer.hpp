//
//  vectorContainer.hpp
//  lab3
//
//  Created by james luo on 10/25/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef vectorContainer_hpp
#define vectorContainer_hpp
#include "Base.hpp"
#include "Container.hpp"
#include <vector>
#include <stdio.h>
class VectorContainer: public Container {
private:
    std::vector<Base *> elementSets;
public:
    VectorContainer();
    ~VectorContainer();
    void add_element(Base *);
    void print();
    void sort();
    void swap(int i,int j);
    Base* at(int i);
    int size();
};
#endif /* vectorContainer_hpp */
