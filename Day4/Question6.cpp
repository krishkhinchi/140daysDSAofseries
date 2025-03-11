// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 

#include <iostream>
using namespace std;
int main(){

    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout << i-j+1 << " ";
        }
        cout << endl;
    }

    return 0;
}