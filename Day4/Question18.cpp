//        1 
//      2 2 
//    3 3 3
//  4 4 4 4

#include <iostream>
using namespace std;
int main(){

    int count=1;

    for(int i=1;i<=4;i++){
        for(int j=4;j>=i;j--){
            cout<< "  ";
        }
        for(int k=1;k<=i;k++){
            cout<< count <<" ";
        }
        count++;
        cout << endl;
    }

    return 0;
}