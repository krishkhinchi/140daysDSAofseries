// Check even or odd using function

#include <iostream>
using namespace std;


// if even --> return 1
// if odd --> return 0
bool checkEvenOdd(int num) {
    if (num % 2 == 0) return 1;
    else return 0;
}

int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << checkEvenOdd(num);

    return 0;
}