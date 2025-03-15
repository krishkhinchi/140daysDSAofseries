// Power of Two

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int value=0;
    for(int i=0;i<=30;i++){
        if(pow(2,i)==n){
            value=1;
        }
    }
    
    (value==1) ? cout << n << " is a power of 2" : cout << n << " is not a power of 2";

    return 0;
}