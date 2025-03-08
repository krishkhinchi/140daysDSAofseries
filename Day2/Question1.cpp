// Write a program to find a maximum from given two numbers.

#include <iostream>
using namespace std;
int main(){
    
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if(num1>num2){
        cout << "Maximum number is: "<< num1;
    }
    else{
        cout << "Maximum number is: "<< num2;
    }

    return 0;
}