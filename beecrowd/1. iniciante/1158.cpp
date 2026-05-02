#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;

        cin >> x >> y;

        if (x % 2 == 0)
        {
            x++;
        }

        int s = 0;

        for (int j = 0; j < y; j++)
        {
            s += x + j * 2;
        }

        cout << s << endl;
    }

    return 0;
}
