#include <bits/stdc++.h>

using namespace std;

int main()
{
    int C;
    char T;

    cin >> C >> T;

    double M[12][12];

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }

    double S = 0.0;

    for (int i = 0; i < 12; i++)
    {
        S += M[i][C];
    }

    cout << fixed << setprecision(1) << (T == 'M' ? (S / 12) : S) << endl;

    return 0;
}
