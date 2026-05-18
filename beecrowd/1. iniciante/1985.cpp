#include <bits/stdc++.h>

using namespace std;

unordered_map<int, double> cardapio = {
    {1001, 1.50},
    {1002, 2.50},
    {1003, 3.50},
    {1004, 4.50},
    {1005, 5.50}};

double soma = 0.0;

int main()
{
    int n;

    cin >> n;

    int p, q;

    while (n--)
    {
        cin >> p >> q;

        soma += cardapio[p] * q;
    }

    cout << fixed << setprecision(2) << soma << endl;

    return 0;
}
