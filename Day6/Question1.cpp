// Binary representation of the input

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int input,value=0;
    cout << "Enter a value: ";
    cin >> input;

    int i=0;
    while(input>0){
        int bit = input & 1;
        value = (bit * pow(10, i)) + value;
        input = input >> 1;
        i++;
    }

    cout << "Binary representation of the input: " << value;

    return 0;
}