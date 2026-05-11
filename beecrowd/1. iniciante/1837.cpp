#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int q = a / b;
    int r = a % b;

    if (r < 0)
    {
        /*
         * se o resto veio negativo, ajustamos o intervalo
         *
         * somamos |b| ao resto para torna-lo positivo
         * e compensamos no quociente:
         *
         * - se b > 0, diminuimos q
         * - se b < 0, aumentamos q
         */

        r += abs(b);
        q -= (b > 0 ? 1 : -1);
    }

    cout << q << " " << r << endl;

    return 0;
}
