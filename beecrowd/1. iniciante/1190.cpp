#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE 12

int main()
{
    // leitura da operação

    char O;

    cin >> O;

    // leitura da matriz

    double M[12][12];

    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = 0; j < MAX_SIZE; j++)
        {
            cin >> M[i][j];
        }
    }

    // executando operação

    double S = 0.0, C = 0.0;

    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = MAX_SIZE - i; j < MAX_SIZE; j++)
        {
            if (j <= i)
            {
                continue;
            }

            S += M[i][j];
            C += 1;
        }
    }

    cout << fixed << setprecision(1) << (O == 'M' ? S / C : S) << endl;

    return 0;
}
