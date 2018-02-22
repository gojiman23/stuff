//
//  main.cpp
//  lab3
//
//  Created by james luo on 10/24/17.
//  Copyright © 2017 james luo. All rights reserved.
//

#include <iostream>
#include "Op.hpp"
#include "vectorContainer.hpp"
#include "listContainer.hpp"
#include "selectionSort.hpp"
#include "Multiply.hpp"
#include "add.hpp"
#include "Square.hpp"
#include "subtract.hpp"
#include "bubbleSort.hpp"
#include "abs.h"
#include "ceil.h"
#include "floor.h"
// #include necessary classes

using namespace std;

int main() {
    Op* op7 = new Op(7);
    Op* op4 = new Op(4);
    Op* op3 = new Op(3);
    Op* op2 = new Op(2);
    Op* op5 = new Op(-5.5);
    Multiply* A = new Multiply(op7, op4);
    Add* B = new Add(op3, A);
    Subtract* C = new Subtract(B, op2);
    Square* D = new Square(C);
    VectorContainer* container = new VectorContainer;
    container->add_element(A);
    container->add_element(B);
    container->add_element(C);
    container->add_element(D);
    cout << "Container Before Sort: " << endl;
    container->print();
    cout << "Container After Sort: " << endl;
    container->set_sort_function(new selectionSort());
    container->sort();
    container->print();
    Abs *k = new Abs(op5);
    Floor *j = new Floor(k);
    cout << j -> evaluate()  << endl;
};
