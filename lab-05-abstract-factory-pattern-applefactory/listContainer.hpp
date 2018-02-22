//
//  listContainer.hpp
//  lab3
//
//  Created by james luo on 10/25/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef listContainer_hpp
#define listContainer_hpp
#include "Container.hpp"
//#include "Base.hpp"
#include <list>
#include <stdio.h>
class ListContainer :public Container{
private:
    std::list<Base*> elementSets;
public:
    ListContainer();
    ~ListContainer();
    void add_element(Base *);
    void print();
    void sort();
    void swap(int i, int j);
    Base* at(int i);
    int size();
    std::list<Base *> getList ();
};
#endif /* listContainer_hpp */
