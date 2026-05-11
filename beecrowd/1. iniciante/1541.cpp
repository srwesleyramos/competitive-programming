#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C;

    while (cin >> A >> B >> C && A != 0)
    {
        cout << (int) sqrt(A * B * 100.0 / C) << endl;
    }

    return 0;
}
