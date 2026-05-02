#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, t = 0.0;
    int c = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> n;

        if (n > 0)
        {
            c++;
            t += n;
        }
    }

    cout << c << " valores positivos" << endl;
    cout << fixed << setprecision(1) << (t / c) << endl;

    return 0;
}
