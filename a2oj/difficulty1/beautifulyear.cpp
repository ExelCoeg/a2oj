#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int year;
    cin >> year;
    year += 1;
    auto year_str = to_string(year);
    bool isDistinct;
    for (int i = 0; i < year_str.size(); i++)
    {
        int mycount = count(year_str.begin(), year_str.end(), year_str[i]);

        if (mycount > 1)
        {
            year += 1;
            year_str = to_string(year);
            i = 0;
        }
        else if (mycount == 1 && i == year_str.size() - 1)
        {
            isDistinct = true;
            break;
        }
    }
    if (isDistinct == true)
    {
        cout << year_str;
    }
}
