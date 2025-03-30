// Intersection Of Two Sorted Arrays (code360)

#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n=5,m=5;
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    int i=0,j=0;
	vector<int> vec;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			vec.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
    cout << vec.size();

    return 0;
}