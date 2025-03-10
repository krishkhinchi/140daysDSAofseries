// 1 2 3 
// 4 5 6
// 7 8 9

#include <iostream>
using namespace std;
int main(){

    int num=1;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}