// Fibonacci series

#include <iostream>
using namespace std;
int main(){

    int num1=0;
    int num2=1;
    int newNum,n;

    cout << "Enter a number: ";
    cin >> n;

    cout << num1 <<endl;
    cout << num2 <<endl;

    for(int i=0;i<n;i++){
        newNum = num1+num2;
        num1=num2;
        num2=newNum;
        cout << newNum <<endl;
    }

    return 0;
}