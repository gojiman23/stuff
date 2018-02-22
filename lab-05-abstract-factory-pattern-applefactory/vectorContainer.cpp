/
//  vectorContainer.cpp
//  lab3
//
//  Created by james luo on 10/25/17.
//  Copyright © 2017 james luo. All rights reserved.
//
//#include "Container.hpp"
#include "vectorContainer.hpp"
#include "Sort.hpp"
#//include "Base.hpp"
#include <vector>
#include <iostream>
#include <algorithm>
VectorContainer::VectorContainer(){
}

VectorContainer::~VectorContainer(){
}

void VectorContainer::add_element(Base *newElement){
    this -> elementSets.push_back(newElement);
}

void VectorContainer::print(){
	this->factory->generatePrint()->print();
}

void vectorContainer::sort(){
    this -> toSort= this ->elementSets;
    this -> sort_function -> sort(this);
    this -> elementSets = this -> toSort;
}
void VectorContainer::swap(int i, int j){
    std::swap(this -> elementSets.at(i), this -> elementSets.at(j));
}
Base* VectorContainer::at(int i){
    return elementSets.at(i);
}

int VectorContainer::size(){
    return elementSets.size();
}
