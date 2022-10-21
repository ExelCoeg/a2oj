#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string word;
    cin >> word;
    string temp = word;

    int uppercount = 0;
    int lowercount;

    sort(word.begin(), word.end());
    for (int i = 0; i < word.size(); i++)
    {
        if (isupper(word[i]))
        {
            uppercount += 1;
        }
    }
    lowercount = word.size() - uppercount;
    if (uppercount > lowercount)
    {

        for (int i = 0; i < word.size(); i++)
        {
            temp[i] = toupper(temp[i]);
        }
        cout << temp;
    }
    else
    {
        for (int i = 0; i < word.size(); i++)
        {
            temp[i] = tolower(temp[i]);
        }
        cout << temp;
    }
}