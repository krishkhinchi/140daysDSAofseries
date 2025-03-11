// A B C 
// B C D
// C D E

#include <iostream>
using namespace std;
int main(){

    char ch='A';
    char temp;

    for(int i=0;i<4;i++){
        temp=65+i;
        for(int j=0;j<4;j++){
            cout << temp << " ";
            temp++;
        }
        temp++;
        cout << endl;
    }

    return 0;
}