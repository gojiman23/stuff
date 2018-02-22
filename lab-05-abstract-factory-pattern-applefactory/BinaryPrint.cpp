#include "BinaryPrint.hpp"
#include "listContainer.hpp"
#include <list>
#include <iostream>
#include <cmath>

BinaryPrint::BinaryPrint(){

}

BinaryPrint::BinaryPrint(double value){
        this->value = value;
}

void BinaryPrint::print(){
        std::bitset<64> foo;
	double temp;
        for (std::list<Base *>::iterator it = this -> elementSets.begin(); it != this -> elementSets.end(); it++){
                Base *cur = *it;
		temp = cur -> evaluate();
		exp = findGCD(temp);
		for (int i = 0; temp > 0; i++){
			temp -= Math.pow(2,exp);
			if(temp > 0){
				foo[exp] = 1;
			}
		}
                std::cout << foo << " ";
        }
}

int findGCD(double val){
	double num = val;
	int count = -1;
	while(num > 0){
		num = val;
		num - Math.pow(2, count);
		count++;
	}
	return count;
}
~

