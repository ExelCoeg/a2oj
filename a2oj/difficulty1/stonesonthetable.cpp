#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    string stones;
    cin >> stones;
    for (int i = 0; i < n; i++)
    {
        if (stones[i] == stones[i + 1])
        {
            count += 1;
        }
    }
    cout << count;
}