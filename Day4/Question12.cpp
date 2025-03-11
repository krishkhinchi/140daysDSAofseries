// A 
// B C
// C D E
// D E F G

#include <iostream>
using namespace std;
int main(){

    char ch = 'A';
    char temp;
    for(int i=0;i<4;i++){
        temp = ch;
        for(int j=0;j<=i;j++){
            cout << temp << " ";
            temp++;
        }
        ch++;
        cout << endl;
    }

    return 0;
}