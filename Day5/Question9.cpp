// Sum of 1 to N using for loop

#include <iostream>
using namespace std;
int main(){

    int num,sum=0;
    cout << "Enter a number: ";
    cin >> num;

    for(int i=1;i<=num;i++){
        sum+=i;
    }
    cout << "Sum of 1 to " << num << " = " << sum;

    return 0;
}