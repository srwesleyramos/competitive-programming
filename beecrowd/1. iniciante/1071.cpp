#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    int c = 0;

    for (int i = min(x, y) + 1; i < max(x, y); i++)
    {
        if (abs(i) % 2 == 1)
        {
            c += i;
        }
    }

    cout << c << endl;

    return 0;
}
