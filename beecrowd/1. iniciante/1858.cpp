#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    cin >> n;

    int v = INT_MAX, p = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> k;

        if (k < v)
        {
            v = k;
            p = i + 1;
        }
    }

    cout << p << endl;

    return 0;
}
