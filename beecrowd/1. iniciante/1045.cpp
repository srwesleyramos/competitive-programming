#include <bits/stdc++.h>

using namespace std;

int main()
{
    double lados[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> lados[i];
    }

    sort(begin(lados), end(lados), greater<double>());

    double A = lados[0], B = lados[1], C = lados[2];

    if (A >= B + C)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }

    if (A * A == B * B + C * C)
    {
        cout << "TRIANGULO RETANGULO" << endl;
    } else if (A * A > B * B + C * C)
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    } else if (A * A < B * B + C * C)
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if (A == B && B == C)
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    } else if (A == B || A == C || B == C)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
