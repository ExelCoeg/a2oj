#include <iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totaltoasts = (k * l) / nl;
    int totaltoasts2 = c * d;
    int totaltoasts3 = p / np;
    cout << min(min(totaltoasts, totaltoasts2), totaltoasts3) / n;
}