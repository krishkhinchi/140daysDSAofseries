// Find sum of 1 to N using While loop

#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;

    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "Sum of 1 to " << n << " is: " << sum;

    return 0;
}