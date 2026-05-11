#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    while (cin >> N && N != 0)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int coluna = min(i, N - i - 1);
                int fileira = min(j, N - j - 1);
                int result = min(coluna, fileira) + 1;

                cout << setw(3) << result << (j == N - 1 ? "" : " ");
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
