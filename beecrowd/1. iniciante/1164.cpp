#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;

    cin >> n;

    while (n--)
    {
        int s = 0;

        cin >> x;

        for (int i = 1; i < x; i++)
        {
            if (x % i == 0)
            {
                s += i;
            }
        }

        cout << x << (s == x ? " eh perfeito" : " nao eh perfeito") << endl;
    }

    return 0;
}
