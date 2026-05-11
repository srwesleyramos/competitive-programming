#include <bits/stdc++.h>

using namespace std;

int main()
{
    int L;

    while (cin >> L)
    {
        int V, M = 0;

        while (L--)
        {
            cin >> V;

            if (V > M)
            {
                M = V;
            }
        }

        if (M >= 20)
        {
            cout << 3 << endl;
        }
        else if (M >= 10)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
