#include "bits/stdc++.h"
using namespace std;

int numberOfSquares(int n)
{
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (i * i == n)
        {
            return ans;
        }
        ans++;
    }
}

int main()
{
    int n = 9;
    cout << numberOfSquares(n);

    return 0;
}