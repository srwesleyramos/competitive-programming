#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;

    while (cin >> x && x != 0)
    {
        for (int i = 1; i <= x; i++)
        {
            cout << i << (i != x ? " " : "");
        }

        cout << "\n";
    }

    return 0;
}
