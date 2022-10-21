#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int n;
    int xi, yi, zi, x, y, z;
    cin >> n;
    int vector_resultant;

    for (int i = 0; i < n; i++)
    {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;
    }
    vector_resultant = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    if (vector_resultant == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}