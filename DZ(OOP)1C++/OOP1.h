#pragma once
#include <iostream>

using namespace std;

class Fraction1 {
private:
    int Numerator;
    int Denominator;
    
public:
    void Input(int c, int z)
    {
        Numerator = c;
        Denominator = z;
    }
    void Multiplication(int x)
    {
        Numerator *= x;
        cout << "Fraction after Multiplication:  " << Numerator << '/' << Denominator << endl; 
    }
    void Division(int x)
    {
        Denominator *= x;
        cout << "Fraction after Division:  " << Numerator << '/' << Denominator << endl; 

    }
    void Summation(int x)
    {
        Numerator += (x * Denominator);
        cout << "Fraction after Summation:  " << Numerator << '/' << Denominator << endl; 
    }
    void Subtraction(int x)
    {
        Numerator -= (x * Denominator); 
        cout << "Fraction after Subtraction:  " << Numerator << '/' << Denominator << endl; 
    }
    void Output()
    {
        cout << "Current fraction --> " << Numerator << '/' << Denominator << endl;
    }
    void Output1()
    {
        cout << "Current fraction --> " << Numerator << '/' << Denominator << endl;
    }
};




