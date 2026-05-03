#include <bits/stdc++.h>

using namespace std;

int main()
{
    char O;

    cin >> O;

    double M[12][12];

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }

    double S = 0.0;
    int C = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < i; j++)
        {
            S += M[i][j];
            C += 1;
        }
    }

    cout << fixed << setprecision(1) << (O == 'M' ? (S / C) : S) << endl;

    return 0;
}
