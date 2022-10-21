#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string number;
    cin >> number;
    for (int i = 0; i < number.size(); i++)
    {
        if (number[i] != '4' && number[i] != '7')
        {

            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}