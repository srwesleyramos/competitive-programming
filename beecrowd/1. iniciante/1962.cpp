#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        int t;

        cin >> t;

        if (t >= 2015)
        {
            cout << t - 2014 << " A.C." << endl;
        }
        else
        {
            cout << 2015 - t << " D.C." << endl;
        }
    }

    return 0;
}
