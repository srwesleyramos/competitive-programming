#include <bits/stdc++.h>

using namespace std;

int main()
{
    int L;
    char T;

    cin >> L >> T;

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
        S += M[L][i];
    }

    cout << fixed << setprecision(1) << (T == 'S' ? S : (S / 12)) << endl;

    return 0;
}
