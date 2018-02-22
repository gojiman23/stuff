//
//  listContainer.cpp
//  lab3
//
//  Created by james luo on 10/25/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#include "listContainer.hpp"
#include <vector>
#include <iostream>
#include <list>
//#include "Base.hpp"
//#include "Container.hpp"
#include "Sort.hpp"

ListContainer::ListContainer(){
}



void ListContainer::add_element(Base *newElement){
    this -> elementSets.push_back(newElement);
}

void ListContainer::print(){
    for (std::list<Base *>::iterator it = this -> elementSets.begin(); it != this -> elementSets.end(); it++){
        Base *cur = *it;
        std::cout << cur -> evaluate() << " ";
    }
}
void ListContainer::sort(){
    for (std::list<Base *>::iterator it = elementSets.begin(); it != elementSets.end(); it++){
        this -> toSort.push_back(*it);
    }
    sort_function -> sort(this);
    std::list<Base *> newList;
    for (int i = 0; i < this -> toSort.size(); i++){
        newList.push_back(this -> toSort.at(i));
    }
    this -> elementSets = newList;
}
void ListContainer::swap(int i, int j){
    std::list<Base*>::iterator it = this -> elementSets.begin();
    std::advance(*it,i-1);
    std::list<Base*>::iterator swapWith = this -> elementSets.begin();
    std::advance(*swapWith,j-1);
    std::swap(*swapWith,*it);
}
Base *ListContainer::at(int i){
    std::list<Base*>::iterator it = this->elementSets.begin();
    std::advance(it, i -1);
    return *it;

}

int ListContainer::size(){
    return this -> elementSets.size();
}
std::list<Base*> ListContainer::getList(){
    return this -> elementSets;
}
