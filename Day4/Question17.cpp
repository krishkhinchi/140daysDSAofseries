//  1 1 1 1 
//    2 2 2
//      3 3
//        4

#include <iostream>
using namespace std;
int main(){

    int count=1;

    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<< "  ";
        }
        for(int k=4;k>=i;k--){
            cout<< count <<" ";
        }
        count++;
        cout << endl;
    }

    return 0;
}