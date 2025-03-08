// Check a number is positive or negative.

#include <iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num>0){
        cout << "The number is positive.";
    }
    else{
        cout << "The number is negative.";
    }
    
    return 0;
}