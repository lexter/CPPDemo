#include <iostream>
#include "MathFuncsLib.h"

using namespace std;
using namespace MathFuncs;

double cb(double a, double b) { return a+b; };

int main() 
{
    cout 
        << "asdf" 
        << "\n" 
        << MathFuncs::MyMathFuncs::Add(3,3) 
        << "\n";

    cout
        << MathFuncs::MyMathFuncs::Custom(3,3, cb)
        // << MathFuncs::MyMathFuncs::Custom(3,3, [](double a, double b) { return a+b; })
        << "\n";

    return 0;
}

/**
 * g++ -c main.cpp -o main.o
 * g++ -c MathFuncsLib.cpp -o MathFuncsLib.o
 * g++ main.o MathFuncsLib.o -o main
 * ./main
 * 
 * ar r libMathFuncs.a MathFuncsLib.o
 */