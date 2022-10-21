#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> prime;
    int n;
    cin >> n;
    for (int i = n; i < n + 50; i++)
    {
        for (int j = i - 1; j < 0; j--)
        {
            if (i % j == 0)
            {
                return false;
            }
        }
        prime.push_back(n);
    }
}