#include "bits/stdc++.h"
using namespace std;

bool isPower(int x, int y)
{
    if (y % x == 0)
    {

        return true;
    }
    return false;
}

int main()
{
    cout << isPower(2, 8);

    return 0;
}