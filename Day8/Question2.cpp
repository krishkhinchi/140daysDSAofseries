// Calculator using switch

#include <iostream>
using namespace std;
int main(){

    int num1,num2;
    char Operator;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> Operator;
    cout << "Enter second number: ";
    cin >> num2;

    switch(Operator){
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}