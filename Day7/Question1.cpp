// Reverse Integer

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int value = 0, x;
    cout << "Enter a number: ";
    cin >> x;

    int temp = x;
    while (temp != 0){
        int digit = temp % 10;

        if((value>INT32_MAX/10)||(value<INT32_MIN/10)){
           cout << "Error: The reversed number is out of range.";
        }

        value = (value * 10) + digit;
        temp /= 10;
    }
    cout << value;

    return 0;
}