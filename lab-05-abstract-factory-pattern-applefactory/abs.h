#include "Op.hpp"
#include "operator.hpp"
class Abs :public Base{
    double data;
    public:
    Abs(Base*);
    double evaluate();
};

