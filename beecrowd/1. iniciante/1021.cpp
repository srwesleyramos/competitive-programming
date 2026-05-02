#include <bits/stdc++.h>

using namespace std;

int notas[] = {10000, 5000, 2000, 1000, 500, 200};
int moedas[] = {100, 50, 25, 10, 5, 1};

int main()
{
    double x;

    cin >> x;

    int valor = round(x * 100);

    cout << "NOTAS:" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << (valor / notas[i]) << " nota(s) de R$ " << fixed << setprecision(2) << (notas[i] / 100.0) << endl;

        valor = valor % notas[i];
    }

    cout << "MOEDAS:" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << (valor / moedas[i]) << " moeda(s) de R$ " << fixed << setprecision(2) << (moedas[i] / 100.0) << endl;

        valor = valor % moedas[i];
    }

    return 0;
}
