#include <bits/stdc++.h>

using namespace std;

void print(int v[], int n, string s)
{
    for (int i = 0; i < n; i++)
    {
        cout << s << "[" << i << "] = " << v[i] << endl;
    }
}

int main()
{
    int pares[5], impares[5];

    int p = 0, i = 0, k;

    for (int j = 0; j < 15; j++)
    {
        cin >> k;

        if (k % 2 == 0)
        {
            pares[p++] = k;

            if (p == 5)
            {
                print(pares, p, "par");
                p = 0;
            }
        }
        else
        {
            impares[i++] = k;

            if (i == 5)
            {
                print(impares, i, "impar");
                i = 0;
            }
        }
    }

    if (i != 0)
    {
        print(impares, i, "impar");
    }

    if (p != 0)
    {
        print(pares, p, "par");
    }

    return 0;
}
