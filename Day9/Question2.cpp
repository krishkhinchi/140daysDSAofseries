#include <iostream>
using namespace std;

int getMax(int a[], int b) {
    int Max = INT32_MIN;
    for (int i = 0; i < b; i++){
        if (a[i] > Max){
            Max = a[i];
        }
    }
    return Max;
}

int getMin(int a[], int b) {
    int Min = INT32_MAX;
    for (int i = 0; i < b; i++){
        if (a[i] < Min){
            Min = a[i];
        }
    }
    return Min;
}

int main(){

    int size;
    cout << "Enter the array size: ";
    cin >> size;

    int num[100];

    for(int i=0;i<size;i++){
        cout << "Enter the index " << i << " value: ";
        cin >> num[i];
    }

    cout << "Max element is: " << getMax(num, size) << endl;
    cout << "Min element is: " << getMin(num, size) << endl;

    return 0;
}