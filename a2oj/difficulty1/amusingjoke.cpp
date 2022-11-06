#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    string string1, string2, perm;
    cin >> string1 >> string2 >> perm;
    for (int j = 0; j < string1.size(); j++)
    {
        string2 += string1[j];
    }
    sort(string2.begin(), string2.end());
    sort(perm.begin(), perm.end());
    if (string2 == perm)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}