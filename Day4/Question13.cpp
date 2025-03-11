// A B C 
// B C D
// C D E

#include <iostream>
using namespace std;
int main(){

    char ch;

    for(int i=0;i<4;i++){
        ch=65+i;
        for(int j=0;j<4;j++){
            cout << ch << " ";
            ch++;
        }
        ch++;
        cout << endl;
    }

    return 0;
}