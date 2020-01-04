// MathFuncsLib.h

#include<iostream>

using namespace std;

namespace MathFuncs
{
    class MyMathFuncs
    {
    public:
        // Returns a + b
        static double Add(double a, double b);

        // Returns a - b
        static double Subtract(double a, double b);

        // Returns a * b
        static double Multiply(double a, double b);

        // Returns a / b
        static double Divide(double a, double b);

        // Returns answer.
        static double Custom(double a, double b, std::function<double(double, double)> callback);
    };
}