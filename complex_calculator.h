//
//  complex_calculator.h
//  Quantum Computing Project
//
//

#ifndef complex_calculator_h
#define complex_calculator_h

#include <stdio.h>
#include <complex>
#include <vector>
using namespace std;

class ComplexCalculations
{
public:
    complex<double> addition(complex<double>, complex<double>);
    complex<double> subtraction();
    complex<double> multiplication();
    complex<double> division();
    complex<double> modulus();
    complex<double> conjugate();
protected:
private:
};

#endif /* complex_calculator_h */
