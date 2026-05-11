#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s;

    while (cin >> s)
    {
        for (int i = 0; i < s; i++)
        {
            for (int j = 0; j < s; j++)
            {
                int o = 0;

                // diagonal

                if (i == j)
                {
                    o = 2;
                }

                if (i == s - j - 1)
                {
                    o = 3;
                }

                // interno

                int p = s / 3;

                if (i >= p && j >= p && i <= (s - p - 1) && j <= (s - p - 1))
                {
                    o = 1;
                }

                // centro

                vector<pair<int, int>> adj = {
                    {floor((s - 1) / 2.0), floor((s - 1) / 2.0)},
                    {floor((s - 1) / 2.0), ceil((s - 1) / 2.0)},
                    {ceil((s - 1) / 2.0), floor((s - 1) / 2.0)},
                    {ceil((s - 1) / 2.0), ceil((s - 1) / 2)},
                };

                for (int k = 0; k < 4; k++)
                {
                    pair<int, int> a = adj.at(k);

                    if (i == a.first && j == a.second)
                    {
                        o = 4;
                        break;
                    }
                }

                cout << o;
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
