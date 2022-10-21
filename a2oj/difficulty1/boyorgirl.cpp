#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string username;
    cin >> username;

    string distinct;
    for (int i = 0; i < username.size(); i++)
    {

        int mycount = count(distinct.begin(), distinct.end(), username[i]);
        if (mycount == 0)
        {

            distinct += username[i];
        }
    }
    if (distinct.size() % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}