#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << i << " " << (i * i + j) << " " << (i * i * i + j) << endl;
        }
    }

    return 0;
}
