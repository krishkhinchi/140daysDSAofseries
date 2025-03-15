// Check a number is prime or not using function

#include <iostream>
using namespace std;

void is_prime(int n) {
    int i;
    for(i = 2; i < n; i++){
        if(n % i == 0){
            break;
        }
    }
    (n==i) ? cout << n << " is a prime number" : cout << n << " is not a prime number";
}

int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;
    is_prime(num);

    return 0;
}