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
        value = (value * 10) + digit;
        temp /= 10;
    }
    cout << value;

    return 0;
}