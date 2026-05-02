#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    cin >> n;

    int m = INT_MAX, p = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> k;

        if (k < m)
        {
            m = k;
            p = i;
        }
    }

    cout << "Menor valor: " << m << endl;
    cout << "Posicao: " << p << endl;

    return 0;
}
