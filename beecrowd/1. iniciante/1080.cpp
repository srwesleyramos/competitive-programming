#include <bits/stdc++.h>

using namespace std;

int main()
{
    int maior = 0, posicao = 0;

    for (int i = 0; i < 100; i++)
    {
        int x;

        cin >> x;

        if (x > maior)
        {
            maior = x;
            posicao = i + 1;
        }
    }

    cout << maior << endl;
    cout << posicao << endl;

    return 0;
}
