#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, t;
    string queue;
    char temp;
    cin >> n >> t >> queue;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int sec = 0; sec < t; sec++)
        {
            cout
                << queue << endl;
            if (queue[i] == 'B' && queue[i + 1] == 'G')
            {
                temp = queue[i + 1];
                queue[i + 1] = queue[i];
                queue[i] = temp;
                if (queue[i + 2] == 'G')
                {
                    i += 1;
                }
            }
        }
    }
    string answer = "GBBGBB";
    cout << "result: " << queue << endl;
    cout << "answer: " << answer;
}