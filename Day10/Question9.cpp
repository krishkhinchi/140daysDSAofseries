// time, space complexity #1

#include <iostream>
using namespace std;
int main()
{
    int N = 10,M=10;
    int a = 0, b = 0;
    for (int i = 0; i < N; i++)
    {
        a = a + rand();
    }
    for (int j = 0; j < M; j++)
    {
        b = b + rand();
    }

    return 0;
}