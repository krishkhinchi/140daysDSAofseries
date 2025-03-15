// Find power using function

#include <iostream>
#include <cmath>
using namespace std;

int findPower(int a,int b){
    int power= pow(a,b);
    return power;
}

int main(){

    int num1,num2;
    cout<<"Enter a base number: ";
    cin >> num1;
    cout<<"Enter a power: ";
    cin >> num2;

    cout << "Power is: " << findPower(num1,num2);

    return 0;
}