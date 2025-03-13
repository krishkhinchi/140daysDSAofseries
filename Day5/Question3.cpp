// pri and post increment/decrement operators

#include <iostream>
using namespace std;
int main(){

    int a = 5; // declare and initialize a variable a with value 5
    cout << "Value of a before increment: " << a << endl;
    cout << "Value of a after post increment: " << a++ << endl; 
    cout << "Value of a after pri increment: " << ++a << endl; 
    cout << "Value of a before decrement: " << a << endl;
    cout << "Value of a after pri decrement: " << --a << endl; 
    cout << "Value of a after post decrement: " << a-- << endl;  

    return 0;
}