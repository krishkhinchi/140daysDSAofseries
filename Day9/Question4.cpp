// Check element exist in array or not by function

#include <iostream>
using namespace std;

bool checkExist(int arr[],int n){
    for(int i=0;i<10;i++){
        if(arr[i]==n){
            return true;
        }
    }
    return false;
}

int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int array[10] = {4, -5, 3, 6, 26, 1, 7, 2, 9, 0};
    bool Exist = checkExist(array, num);
    (Exist) ? cout << num << " exists in the array" : cout << num <<  " does not exist in the array";

    return 0;
}