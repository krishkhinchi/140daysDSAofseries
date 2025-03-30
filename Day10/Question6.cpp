// Pair Sum (Code360)

#include <iostream>
#include <vector>
using namespace std;
int main(){

    int s =5;
    int arr[4] = {1,2,3,4,5};
    vector<vector<int>> value;
   for(int i=0;i<5;i++){
      for(int j=i+1;j<5;j++){
         if(arr[i]+arr[j]==s){
            vector<int>store;
            store.push_back(min(arr[i],arr[j]));
            store.push_back(max(arr[i],arr[j]));
            value.push_back(store);
         }
      }
   }
   cout << value.size();

    return 0;
}