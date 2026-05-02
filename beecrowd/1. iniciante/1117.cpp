#include <bits/stdc++.h>

using namespace std;

int main()
{
    double s = 0, q = 0, k;

    while (q != 2) {
        cin >> k;

        if (k >= 0 && k <= 10) {
            s += k;
            q += 1;
        } else {
            cout << "nota invalida" << endl;
        }
    }

    cout << "media = " << fixed << setprecision(2) << (s / q) << endl;

    return 0;
}
