// Complement of Base 10 Integer

#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a base 10 integer: ";
    cin >> n;

    int val = 0;
    int temp = n;

    if (n == 0){
        cout << "1";
    }
    else{
        while (temp > 0){
            val = (val << 1) | 1;
            temp = temp >> 1;
        }
        int final = (~n) & val;
        cout << final;
    }

    return 0;
}