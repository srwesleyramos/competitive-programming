#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum = 0, qtd = 0, idade;

    while (cin >> idade && idade > 0)
    {
        sum += idade;
        qtd += 1;
    }

    cout << fixed << setprecision(2) << ((double)sum / qtd) << endl;

    return 0;
}