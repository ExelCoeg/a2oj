#include <iostream>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;
int main()
{
    ll int n, k;
    ll even = 0;
    ll odd = -1;
    vector<ll> sequence;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            for (ll i = 0; i < k; i++)
            {
                odd += 2;
            }
            cout << odd;
        }
        else
        {

            for (ll i = n / 2; i < k; i++)
            {
                even += 2;
            }
            cout << even;
        }
    }
    else
    {
        if (k < ceil(n / 2))
        {
            for (ll i = 0; i < k; i++)
            {
                odd += 2;
            }
            cout << odd;
        }
        else
        {
            for (ll i = ceil(n / 2); i < k - 1; i++)
            {
                even += 2;
            }
            cout << even;
        }
    }
}