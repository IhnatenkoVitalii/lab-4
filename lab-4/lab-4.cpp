#include <iostream>
using namespace std;

int main()
{
    const int n = 15;
    int x[n] = { 11,12,13,14,15 };
    int y[n] = {};

    for (int i = 0; i < n; i++)
    {
        y[i] = i;
        cout << y[i] << ",";
    }
}