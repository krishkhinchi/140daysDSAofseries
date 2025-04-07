// First and Last Position of an Element In Sorted Array

#include <iostream>
using namespace std;

int FirstPosition(int arr[], int length, int key){
    int low = 0, high = length - 1;
    int mid = (low+high)/2;
    int ans = -1;

    while(high>=low){
        if(arr[mid]==key){
            ans = mid;
            high = mid - 1; // search in left half
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid = (low+high)/2;
    }
    return ans;
}

int LastPosition(int arr[], int length, int key){
    int low = 0, high = length - 1;
    int mid = (low+high)/2;
    int ans = -1;

    while(high>=low){
        if(arr[mid]==key){
            ans = mid;
            low = mid + 1; // search in right half
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid = (low+high)/2;
    }
    return ans;
}

int main(){

    int arr[9] = {1,2,3,4,4,4,4,5,6};
    int key = 4;
    int first = FirstPosition(arr, 9, key);
    int last = LastPosition(arr, 9, key);
    int count = last - first + 1;
    cout << key << " first position is: " << first << endl;
    cout << key << " last position is: " << last << endl;
    cout << key << " count is: " << count << endl;

    return 0;
}