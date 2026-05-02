#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    int c = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> n;

        if (n > 0.0)
        {
            c++;
        }
    }

    cout << c << " valores positivos" << endl;

    return 0;
}
