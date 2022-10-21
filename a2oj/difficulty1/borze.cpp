#include <iostream>
using namespace std;
int main()
{
    string borze;
    cin >> borze;
    string decrypt;
    int index = 0;
    while (index < borze.size())
    {
        if (borze[index] == '.')
        {
            decrypt += '0';
            index += 1;
        }
        else if (borze[index] == '-')
        {
            if (borze[index + 1] == '.')
            {
                decrypt += '1';
                index += 2;
            }
            else if (borze[index + 1] == '-')
            {
                decrypt += '2';
                index += 2;
            }
        }
    }
    cout << decrypt;
}