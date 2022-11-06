#include <iostream>
using namespace std;
int main()
{
    int n;
    int totala0 = 0;
    int totala1 = 0;
    int totalb0 = 0;
    int totalb1 = 0;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
        {
            totala0 += 1;
        }
        if (a == 1)
        {
            totala1 += 1;
        }
        if (b == 0)
        {
            totalb0 += 1;
        }
        if (b == 1)
        {
            totalb1 += 1;
        }
    }
    if (totala0 < totala1)
    {
        sum += totala0;
    }
    if (totala0 > totala1)
    {
        sum += totala1;
    }
    if (totalb0 < totalb1)
    {
        sum += totalb0;
    }
    if (totalb0 > totalb1)
    {
        sum += totalb1;
    }
    if (totala1 == totala0)
    {
        sum += totala1;
    }
    if (totalb0 == totalb1)
    {
        sum += totalb0;
    }

    cout << sum;
}