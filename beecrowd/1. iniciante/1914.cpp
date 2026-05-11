#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Q;

    cin >> Q;

    while (Q--)
    {
        string A, B, C, D;
        long long N, M;

        cin >> A >> B >> C >> D >> N >> M;

        if ((N + M) % 2 == 0)
        {
            cout << (B == "PAR" ? A : C) << endl;
        }
        else
        {
            cout << (B == "IMPAR" ? A : C) << endl;
        }
    }

    return 0;
}
