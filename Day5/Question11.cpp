// Prime Number

#include <iostream>
using namespace std;
int main(){

    int n,i;
    cout << "Enter a number: ";
    cin >> n;

    for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
    }

    (n==i) ? cout << "Prime" : cout << "Not Prime";

    return 0;
}