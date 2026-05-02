#include <bits/stdc++.h>

using namespace std;

double tabela[][2] = {
    {4500.01, 28.0},
    {3000.01, 18.0},
    {2000.01, 8.0},
    {0.00, 0.0}};

int main()
{
    double salario;

    cin >> salario;

    double imposto = 0.0;

    for (int i = 0; i < 4; i++)
    {
        if (salario >= tabela[i][0])
        {
            imposto += (salario - tabela[i][0]) * tabela[i][1] / 100;
            salario = tabela[i][0];
        }
    }

    if (imposto == 0)
    {
        cout << "Isento" << endl;
    } else {
        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    }

    return 0;
}
