#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c, d;

    cin >> a >> b >> c >> d;

    float media = (a * 2 + b * 3 + c * 4 + d * 1) / 10;

    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if (media >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
        return 0;
    }

    if (media < 5.0)
    {
        cout << "Aluno reprovado." << endl;
        return 0;
    }

    cout << "Aluno em exame." << endl;

    float exame;

    cin >> exame;

    cout << "Nota do exame: " << fixed << setprecision(1) << exame << endl;

    media = (media + exame) / 2;

    if (media >= 5.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else
    {
        cout << "Aluno reprovado." << endl;
    }

    cout << "Media final: " << fixed << setprecision(1) << media << endl;

    return 0;
}
