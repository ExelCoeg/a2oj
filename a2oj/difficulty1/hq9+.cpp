#include <iostream>
using namespace std;
int main()
{
    string a;
    bool contains = false;

    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
        {
            contains = true;
            break;
        }
    }
    if (contains)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}