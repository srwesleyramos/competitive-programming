#include <bits/stdc++.h>

using namespace std;

int n, i = 0, e = 0;
long long c = 0;

int x[1000000];
bool v[1000000];

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        c +=  x[i];
    }

    while (i >= 0 && i < n)
    {
        int qtd = x[i];

        // roubando carneiro

        if (qtd > 0)
        {
            c--;
            x[i]--;

            if (!v[i])
            {
                v[i] = true;
                e++;
            }
        }

        // próxima estrela

        if (qtd % 2 == 0)
        {
            i -= 1;
        }
        else
        {
            i += 1;
        }
        
    }

    cout << e << " " << c << endl;

    return 0;
}
