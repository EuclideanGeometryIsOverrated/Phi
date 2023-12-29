#include "phi.hpp"

double calcPhi(){
    double _r = 1;

    for(int _i = 0; _i <= 40; _i++){
        _r = 1 / _r;
        _r++;
    }

    return _r;
}