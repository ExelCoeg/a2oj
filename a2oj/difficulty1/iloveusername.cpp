#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    int amazing;
    int temp;
    vector<int> scores;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int score;
        cin >> score;
        scores.push_back(score);
    }
    for (int i = 0; i < n; i++)
    {

        if (scores[0] > scores[i + 1])
        {
            temp = scores[0];
            amazing += 1;
        }

        else if (scores[i])
        {
        }
    }
}