#include <bits/stdc++.h>

using namespace std;

int main()
{
    double salario;

    cin >> salario;

    int percentual;

    if (salario <= 400.0)
    {
        percentual = 15;
    }
    else if (salario <= 800.00)
    {
        percentual = 12;
    }
    else if (salario <= 1200.00)
    {
        percentual = 10;
    }
    else if (salario <= 2000.00)
    {
        percentual = 7;
    }
    else
    {
        percentual = 4;
    }

    double reajuste = salario * percentual / 100;

    cout << "Novo salario: " << fixed << setprecision(2) << (salario + reajuste) << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
    cout << "Em percentual: " << percentual << " %" << endl;

    return 0;
}
