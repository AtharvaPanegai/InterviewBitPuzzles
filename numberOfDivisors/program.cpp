#include "bits/stdc++.h"
using namespace std;

int numberOfDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                cnt++;
            }
            else
            {
                cnt = +2;
            }
        }
    }
    return cnt;
}

int numberofThreeDivisors(int n)
{
    int threeDiv = 0;
    for (int i = 1; i <= n; i++)
    {
        int noDiv = numberOfDivisors(i);
        // cout << noDiv << "\n";
        if (noDiv == 3)
        {
            // cout << i << "\n";
            threeDiv++;
        }
    }
    return threeDiv;
}



int main()
{
    int n = 6;
    cout << numberofThreeDivisors(n);

    return 0;
}