#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string a, b;
    string result = "";
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if ((a[i] == '0' && b[i] == '1') //
            ||
            (a[i] == '1' && b[i] == '0')) //
        {
            result += '1';
        }
        else
        {
            result += '0';
        }
    }
    cout << result;
}