// Operators.

#include <iostream>
using namespace std;
int main(){

    int a = 10, b = 5;

    // Arithmatic Operators
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << "\n" << endl;

    // Comparison Operators or Relational Operators
    cout << "Equal to: " << (a == b) << endl;
    cout << "Not Equal to: " << (a != b) << endl;
    cout << "Greater than: " << (a > b) << endl;
    cout << "Less than: " << (a < b) << endl;
    cout << "Greater than or equal to: " << (a >= b) << endl;
    cout << "Less than or equal to: " << (a <= b) << "\n" << endl;

    // Logical Operators
    cout << "Logical AND: " << (a > b && a < 20) << endl;
    cout << "Logical OR: " << (a > b || a < 20) << endl;
    cout << "Logical NOT: " << !(a > b) << "\n" << endl;

    // Assignment Operators
    a = 20;
    cout << "Assignment: " << a << endl;

    return 0;
}