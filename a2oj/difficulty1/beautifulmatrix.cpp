#include <iostream>
using namespace std;
int main()
{
    int output;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int number;
            cin >> number;
            if (number == 1)
            {
                output = abs((3 - i)) + abs((3 - j));
                break;
            }
        }
    }
    cout << output;
}