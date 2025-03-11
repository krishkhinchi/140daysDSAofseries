// D 
// C D
// B C D
// A B C D

#include <iostream>
using namespace std;
int main(){

    char ch;

    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            ch = 68 - i + j;
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}