// Check a number is Prime or not

#include <iostream>
using namespace std;
int main(){

    int Num,i;
    cout<<"Enter a number: ";
    cin>>Num;

    for(i=2;i<Num;i++){
        if(Num%i==0){
            cout<<Num<<" is not a prime number";
            break;
        }
    }

    if(i==Num){
        cout<<Num<<" is a prime number";
    }

    return 0;
}