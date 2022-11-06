#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    int temp;
    vector<int> soldiers;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        soldiers.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        if (soldiers[i] < soldiers[i + 1])
        {
            temp = soldiers[i + 1];
            soldiers[i + 1] = soldiers[i];
            soldiers[i] = temp;
            i += 1;
        }
        }
}