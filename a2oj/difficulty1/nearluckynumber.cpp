#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string number;
    cin >> number;
    int count;

    for (int i = 0; i < number.size(); i++)
    {

        if (number[i] == '4' || number[i] == '7')
        {
            count += 1;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}