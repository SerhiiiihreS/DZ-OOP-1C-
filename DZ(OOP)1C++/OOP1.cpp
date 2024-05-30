#include "OOP1.h"

int main() {
    int a, b, c,c1;
    cout << "Enter the numerator --> " << endl;
    cin >> a;
    cout << "Enter denominator --> " << endl;
    cin >> b;
    cout << "Enter the number --> " << endl;
    cin >> c;
    Fraction1 daw;

    daw.Input(a, b);
    daw.Multiplication(c);
    daw.Subtraction(c);
    cout << endl;
    cout << "---------------------------------------------------------"<<endl; 
    cout << "Enter the number 2 --> " << endl;
    cin >> c1; 
    cout << endl; 
    cout << "---------------------------------------------------------" << endl; 
    daw.Summation(c1);
    daw.Division(c1);
    daw.Output();
}