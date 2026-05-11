#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;

    // constante do 1º para o 2º dia
    // as pessoas ficam felizes se subiu do 2º para o 3º dia ou tristes caso contrário

    if (A == B)
    {
        cout << (B < C ? ":)" : ":(") << endl;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////

    // subiu do 1º para o 2º dia

    if (A < B)
    {
        // desceu ou permaneceu do 2º para o 3º
        // as pessoas ficam tristes

        if (B >= C)
        {
            cout << ":(" << endl;
        }

        // subiu do 2º para o 3º

        if (B < C)
        {
            // subiu do 2º para o 3º no mínimo o tanto que subira do 1º para o 2º
            // as pessoas ficam felizes

            // subiu do 2º para o 3º menos do que subira do 1º para o 2º
            // as pessoas ficam tristes

            int day12 = A - B;
            int day23 = B - C;

            if (day12 >= day23)
            {
                cout << ":)" << endl;
            }
            else
            {
                cout << ":(" << endl;
            }
        }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////

    // desceu do 1º para o 2º dia

    if (A > B)
    {
        // subiu ou permaneceu do 2º para o 3º
        // as pessoas ficam felizes

        if (B <= C)
        {
            cout << ":)" << endl;
        }

        // desceu do 2º para o 3º

        if (B > C)
        {
            // desceu do 2º para o 3º menos do que descera do 1º para o 2º
            // as pessoas ficam felizes

            // desceu do 2º para o 3º no mínimo o tanto que descera do 1º para o 2º
            // as pessoas ficam tristes

            int day12 = A - B;
            int day23 = B - C;

            if (day12 > day23)
            {
                cout << ":)" << endl;
            }
            else
            {
                cout << ":(" << endl;
            }
        }
    }

    return 0;
}
