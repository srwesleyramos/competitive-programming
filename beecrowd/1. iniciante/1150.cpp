#include <bits/stdc++.h>

using namespace std;

int main()
{
    // leitura

    int x, z;

    cin >> x >> z;

    while (z <= x)
    {
        cin >> z;
    }

    // algoritmo

    int s = 0, q = 0;

    for (int i = x; s <= z; i++)
    {
        s += i;
        q += 1;
    }

    cout << q << endl;

    return 0;
}
