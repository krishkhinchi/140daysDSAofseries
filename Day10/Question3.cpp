#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
            vector<int>vec;
    
            map<int, int>mp;
            for(int i=0 ; i<arr.size() ; i++)
            {
                mp[arr[i]]++;
            }
            for(auto m:mp){
                cout<<m.first<<" "<<m.second;
                vec.push_back(m.second);
                cout<<"\n";
            }
    
            for(int i=0;i<vec.size();i++){
                for(int j=i+1;j<vec.size();j++){
                    if(vec[i]==vec[j]){
                        return false;
                    }
                }
            }
        return true;
    }
};

int main(){

    vector<int> arr;
    arr[5]={1,2,3,4,5};

    Solution s;
    s.uniqueOccurrences(arr);

    return 0;
}