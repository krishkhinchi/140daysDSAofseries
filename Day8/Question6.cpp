// Find nCr

#include <iostream>
using namespace std;

int factorial(int fact){
    int num=1;
    for(int i=fact;i>0;i--) num*=i;
    return num;
}

int nCr(int n, int r){
    int nCr = factorial(n)/factorial(r)*factorial(n-r);
    return nCr;
}

int main(){

    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    cout << "nCr = " << nCr(n, r);

    return 0;
}