//
//  Container.hpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#ifndef Container_hpp
#define Container_hpp
#include <vector>
#include <list>
#include <string>
//#include "Sort.hpp"
#include "Base.hpp"
//#include "selectionSort.hpp"

class Sort;

class Container {
    enum{VectorContainer,ListContainer};
public:
    Sort *sort_function;
    BaseFactory *basefact;
    std::vector<Base *> toSort;
    std::string type;
    /* Constructors */
    Container() : sort_function(NULL){
    }
    Container(Sort *function) : sort_function(function){ }
    Container(BaseFactory *factory) : basefact(factory){ }
    /* Non Virtual Functions */
    void set_sort_function(Sort *sort_function); // Set the type of sorting algorithm
    /* Pure Virtual Functions */
    // insert the top pointer of the tree into the container
    virtual void add_element(Base* element) = 0;
    // iterate through trees and output values
    virtual void print() = 0;
    // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
    virtual void sort() = 0;
    /* Essentially the only functions needed to sort */
    // switch tree locations
    virtual void swap(int i,int j) = 0;
    // get the top pointer of tree at index i
    virtual Base* at(int i) = 0;
    // return the container size
    virtual int size() = 0;
};
#endif /* Container_hpp */
