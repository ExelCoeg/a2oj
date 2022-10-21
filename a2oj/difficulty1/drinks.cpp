#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double total;
    for (int i = 0; i < n; i++)
    {
        int drink;
        cin >> drink;
        total += drink;
    }
    total /= n;
    cout << fixed;
    cout << setprecision(12);
    cout << total;
}