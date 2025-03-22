// Print an array using function

#include <iostream>
using namespace std;

void printArray(int* array, int size){
    for(int i=0;i<size;i++){
        cout << array[i] << endl;
    }
}

int main(){

    int arr[5]={1,5,3,4,2};
    int size = sizeof(arr)/sizeof(int);
    printArray(arr, size);

    return 0;
}