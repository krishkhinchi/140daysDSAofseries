#include <iostream>
using namespace std;

int arraySum(int arr[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    int arr[100];
    for(int i=0;i<length;i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "The array sum is " << arraySum(arr, length) << endl;

    return 0;
}