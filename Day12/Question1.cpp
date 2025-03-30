// Implimentation Binary Search

#include <iostream>
using namespace std;

int Binary(int arr[], int length, int key){
    int low = 0, high = length - 1;
    int mid = (low+high)/2;

    while(high>low){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid = (low+high)/2;
    }
    return -1;
}

int main(){

    int even[6] = {4,6,8,2,10,4};
    // int odd[6] = {1,3,5,7,9,1};
    int key = 4;

    cout << key << "is at index number: " << Binary(even, 6, key) << endl;

    return 0;
}