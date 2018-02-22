nclude "DoublePrint.hpp"
#include "listContainer.hpp"
#include <list>
#include <iostream>

DoublePrint::DoublePrint(){

}

DoublePrint::DoublePrint(double value){
        this->value = value;
}

void DoublePrint::print(){
        for (std::list<Base *>::iterator it = this -> elementSets.begin(); it != this -> elementSets.end(); it++){
                Base *cur = *it;
                std::cout << cur -> evaluate() << " ";
        }
}
~
~
#include "HexPrint.hpp"
#include "listContainer.hpp"
#include <list>
#include <iostream>

HexPrint::HexPrint(){

}

HexPrint::HexPrint(double value){
        this->value = value;
}

void HexPrint::print(){
	std::cout << std::hexfloat;
        for (std::list<Base *>::iterator it = this -> elementSets.begin(); it != this -> elementSets.end(); it++){
                Base *cur = *it;
                std::cout << cur -> evaluate() << " ";
        }
}
~
~

