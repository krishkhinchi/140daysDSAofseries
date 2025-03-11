// A 
// B C
// D E F
// G H I J

#include <iostream>
using namespace std;
int main(){

    char ch = 'A';
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}