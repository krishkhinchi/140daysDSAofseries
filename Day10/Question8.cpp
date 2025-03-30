// Find All Triplets With Zero Sum (Code360)

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    vector<int> value;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            for (int k = j + 1; k < 7; k++)
            {
                if (arr[i] + arr[j] + arr[k] == n)
                {
                    vector<int> store;
                    store.push_back(min(arr[i], arr[j], arr[k]));
                    store.push_back(max(arr[i], arr[j], arr[k]));
                    value.push_back(store);
                }
            }
        }
    }
    cout << value.size();

    return 0;
}