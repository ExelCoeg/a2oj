#include <iostream>
using namespace std;
int main()
{
    int n;
    int max = 0;
    int inside = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        inside += b;
        inside -= a;
        if (inside > max)
        {
            max = inside;
        }
    }
    cout << max;
}