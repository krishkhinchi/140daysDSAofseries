// time, space complexity #2

#include <iostream>
using namespace std;
int main()
{

    int a=0,N=10;
    for (int i = 0; i < N; i++){
        for (int j = N; j > i; j--)
        {
            a = a + i + j;
        }
    }

    return 0;
}