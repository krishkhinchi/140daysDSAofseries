#include <iostream>
using namespace std;
int main(){

    int arr[6] = {1, 0, 0, 2, 1, 1};
    int n=6;
    int left = 0, right = n-1;
   while(left<=right){
      while(arr[left]==0 && left<right){
         left++;
      }
      while(arr[right]==1 && left<right){
         right--;
      }

      if(left<right){
         swap(arr[left],arr[right]);
         left++;
         right--;
      }
   }

   for(int i=0;i<n;i++){
      cout << arr[i] << " ";
   }

    return 0;
}