#include <bits/stdc++.h>

using namespace std;

int main()
{
    int inter = 0, gremio = 0, empates = 0;
    int x, y, op;

    do
    {
        cin >> x >> y;

        if (x == y)
        {
            empates++;
        }
        else if (x > y)
        {
            inter++;
        }
        else
        {
            gremio++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> op;
    } while (op == 1);

    cout << (inter + gremio + empates) << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empates << endl;
    cout << (inter != gremio ? (inter > gremio ? "Inter venceu mais" : "Gremio venceu mais") : "Nao houve vencedor") << endl;

    return 0;
}
