#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int r_m = 0;
    double r_n = 0;

    while (n--)
    {
        int m;
        double n;

        cin >> m >> n;

        if (n > r_n) {
            r_m = m;
            r_n = n;
        }
    }

    if (r_n >= 8) {
        cout << r_m << endl;
    } else {
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}
