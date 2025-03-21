// Find Arthmatic Prograss

#include <iostream>
using namespace std;

int findAP(int n){
    return (3*n+7);
}

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Arthmatic Prograss of " << n << "is " << findAP(n);

    return 0;
}