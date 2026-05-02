#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, C, d, r1, r2;

    cin >> A >> B >> C;

    d = B * B - 4 * A * C;

    if (A == 0 || d < 0)
    {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    r1 = (-B + sqrt(d)) / (2 * A);
    r2 = (-B - sqrt(d)) / (2 * A);

    cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
    cout << "R2 = " << fixed << setprecision(5) << r2 << endl;

    return 0;
}
