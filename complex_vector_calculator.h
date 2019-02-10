//
//  complex_vector_calculator.h
//  Quantum Computing Project
//
//

#ifndef complex_vector_calculator_h
#define complex_vector_calculator_h

#include <stdio.h>
#include <vector>
#include "complex_calculator.h"

class ComplexVectorCalculations
{
public:
    vector<vector<complex<double>>> addition(vector<vector<complex<double>>>, vector<vector<complex<double>>>);
    vector<vector<complex<double>>> subtraction(vector<vector<complex<double>>>, vector<vector<complex<double>>>);
    vector<vector<complex<double>>> multiplication(vector<vector<complex<double>>>, vector<vector<complex<double>>>);
    vector<vector<complex<double>>> division(vector<vector<complex<double>>>, vector<vector<complex<double>>>);
    vector<vector<complex<double>>> conjugate(vector<vector<complex<double>>>, vector<vector<complex<double>>>);
    vector<vector<complex<double>>> transpose(vector<vector<complex<double>>>, vector<vector<complex<double>>>);
    vector<vector<complex<double>>> adjoint(vector<vector<complex<double>>>, vector<vector<complex<double>>>);
    bool verifySize(vector<vector<complex<double>>>, vector<vector<complex<double>>>);
protected:
private:
};

#endif /* complex_vector_calculator_h */
