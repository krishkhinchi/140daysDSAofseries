// Reverse an array by function

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    for(int i=0;i<n; i++){
        cout << " " << arr[n-i-1];
    }
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int length=5;

    reverseArray(arr, length);

    return 0;
}