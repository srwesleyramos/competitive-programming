#include <bits/stdc++.h>

using namespace std;

int main()
{
    double vetor[100];

    for (int i = 0; i < 100; i++)
    {
        cin >> vetor[i];
    }

    for (int i = 0; i < 100; i++)
    {
        if (vetor[i] <= 10.0)
        {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << vetor[i] << endl;
        }
    }

    return 0;
}
