#include <iostream>
#include <iomanip>
#include "phi.cpp"

int main(int argc, char *argv[]){

    // 1.6180339887498948
    std::cout << std::setprecision(16) << calcPhi();

    return 0;
}