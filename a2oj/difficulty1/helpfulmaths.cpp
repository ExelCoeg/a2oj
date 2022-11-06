#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string str2 = str;
    sort(str.begin(), str.end());

    int it = count(str.begin(), str.end(), '+');

    int i = 0;
    int j = 0;
    while (i + it < str.size())
    {
        str2[j] = str[it + i];
        i += 1;
        j += 2;
    }

    cout << str2 << endl;
}