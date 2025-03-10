// Check given value is Capital, Small or Numeric value

#include <iostream>
using namespace std;
int main(){

    char ch;
    cout << "Enter your value: ";
    cin >> ch;

    if(ch>='A'&&ch<='Z'){
        cout << "Capital letter";
    }

    else if(ch>='a'&&ch<='z'){
        cout << "Small letter";
    }

    else if (ch>='0'&&ch<='9'){
        cout << "Numeric value";
    }
    

    return 0;
}