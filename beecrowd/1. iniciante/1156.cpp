#include <bits/stdc++.h>

using namespace std;

int main()
{
    double s = 1.0;

    for (double x = 3.0, y = 2.0; x <= 39.0; x += 2, y *= 2)
    {
        s += x / y;
    }

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}
