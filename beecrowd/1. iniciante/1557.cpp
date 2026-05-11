#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    while (cin >> N && N != 0)
    {
        int T = to_string((int) pow(2, 2 * N - 2)).size();

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (j != 0)
                {
                    cout << " ";
                }

                cout << setw(T) << (int) pow(2, i + j);
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
