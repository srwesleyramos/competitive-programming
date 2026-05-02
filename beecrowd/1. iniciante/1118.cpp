#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (true)
    {
        double s = 0, q = 0, k;

        while (q != 2)
        {
            cin >> k;

            if (k >= 0 && k <= 10)
            {
                s += k;
                q += 1;
            }
            else
            {
                cout << "nota invalida" << endl;
            }
        }

        cout << "media = " << fixed << setprecision(2) << (s / q) << endl;

        while (true)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;

            int escolha;

            cin >> escolha;

            if (escolha == 1)
            {
                break;
            }

            if (escolha == 2)
            {
                return 0;
            }
        }
    }

    return 0;
}
