#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p, n;

    cin >> p >> n;

    int c, k;

    cin >> c;

    for (int i = 1; i < n; i++)
    {
        cin >> k;

        if (abs(c - k) > p)
        {
            cout << "GAME OVER" << endl;
            return 0;
        }

        c = k;
    }

    cout << "YOU WIN" << endl;

    return 0;
}
