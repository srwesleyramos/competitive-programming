#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y, c = 0;

        cin >> x >> y;

        for (int j = min(x, y) + 1; j < max(x, y); j++)
        {
            if (j % 2 == 1)
            {
                c += j;
            }
        }

        cout << c << endl;
    }

    return 0;
}
