#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    while (cin >> N)
    {
        int M[N][N];

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                M[i][j] = 3;

                if (i == j)
                {
                    M[i][j] = 1;
                }

                if (i == N - j - 1)
                {
                    M[i][j] = 2;
                }

                cout << M[i][j];
            }

            cout << endl;
        }
    }

    return 0;
}
