// Find sum of all even number btw 1 to N using While loop

#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;

    int i = 2;
    while (i <= n) {
        sum += i;
        i+=2;
    }
    cout << "Sum all even number btw of 1 to " << n << " is: " << sum;

    return 0;
}