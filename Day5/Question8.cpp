// Playing with For Loop

#include <iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    // Print 1 to N
    cout << "Print 1 to "<< num << ":" << endl;
    int i=1;
    for(;;){
        if(i<=num) cout << i << endl;
        else break;
        i++;
    }
    cout << endl;

    // Print Table
    cout << "Print Table Of " << num << ": " << endl;
    for(int i=1,j=num,k; i<=10 ; i++){
        cout << j << " x " << i << " = " << j*i << endl;
    }

    return 0;
}