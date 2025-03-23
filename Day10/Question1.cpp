#include <iostream>
using namespace std;

void handleArray(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

    cout << "Array after swapping: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};
    cout << "Orignal array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    
    handleArray(arr, 5);

    return 0;
}