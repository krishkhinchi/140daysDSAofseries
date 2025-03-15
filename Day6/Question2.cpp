// Convert Binary to Decimal

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int binary, decimal = 0, i = 0;
    cout << "Enter a binary number: ";
    cin >> binary;

    while(binary>0){
        int digit = binary % 10;

        if(digit == 1){
            decimal += pow(2, i);
        }

        binary/=10;
        i++;
    }

    cout << "The Decimal of " << binary << " is " << decimal;

    return 0;
}