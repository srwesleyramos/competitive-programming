#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ddd;

    cin >> ddd;

    map<int, string> tabela = {
        {61, "Brasilia"},
        {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"},
    };

    cout << (tabela.count(ddd) ? tabela[ddd] : "DDD nao cadastrado") << endl;

    return 0;
}
