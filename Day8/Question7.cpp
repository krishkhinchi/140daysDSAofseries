// Print 1 to N

#include <iostream>
using namespace std;

void print(int n){
    for (int i = 1; i <= n; i++){
        cout << i << endl;
    }
}

int main(){

    int N;
    cout << "Enter a number: ";
    cin >> N;
    print(N);

    return 0;
}