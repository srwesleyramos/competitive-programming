#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    int s = 0;

    for (int i = min(x, y); i <= max(x, y); i++)
    {
        if (i % 13 != 0)
        {
            s += i;
        }
    }

    cout << s << endl;

    return 0;
}
