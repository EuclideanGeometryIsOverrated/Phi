#include <iostream>
#include <iomanip>
#include "phi.cpp"

int main(int argc, char *argv[]){

    // 1.618033988749895
    std::cout << std::setprecision(16) << calcPhi();

    return 0;
}