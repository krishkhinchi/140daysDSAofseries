#include <iostream>
using namespace std;
int main(){

    int arr[5]={5,6,8,6,1};
    int i,j;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]==arr[j]){
				cout << "Duplicate found at index " << i << " and " << j << endl;
			}
		}
	}

    return 0;
}