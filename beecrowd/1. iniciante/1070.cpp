#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;

    cin >> q;

    for (int i = q; i <= q + 11; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << endl;
        }
    }

    return 0;
}
