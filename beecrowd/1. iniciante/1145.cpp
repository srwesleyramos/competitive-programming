#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    for (int i = 1; i <= y; i++)
    {
        cout << i << (i % x == 0 ? "\n" : " ");
    }

    return 0;
}
