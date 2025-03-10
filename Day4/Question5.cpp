// 1 
// 2 3
// 3 4 5
// 4 5 6 7

#include <iostream>
using namespace std;
int main(){

    int num;

    for(int i=1;i<=4;i++){
        num=i;
        for(int j=1;j<=i;j++){
            cout<< num << " ";
            num++;
        }
        num++;
        cout<<endl;
    }

    return 0;
}