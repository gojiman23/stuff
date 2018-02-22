#include "Op.hpp"
#include "operator.hpp"
class Ceil: public:Base {
    double data;
    public:
    Ceil(Base*);
    double evaluate();
};

