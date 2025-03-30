#include <iostream>
using namespace std;
int main()
{

    int N=10;
    int a = 0, b = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a = a + j;
        }
    }

    for (int k = 0; k < N; k++)
    {
        b = b + k;
    }

    return 0;
}