#include <iostream>
using namespace std;
int main(){

    int arr[5] = {1,5,7,1,5};
    int store=0;
    for(int i=0;i<5;i++){
        store = store^arr[i];
    }
    cout<<store;

    return 0;
}