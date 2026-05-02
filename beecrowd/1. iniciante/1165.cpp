#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        int x;

        cin >> x;

        bool p = true;

        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                p = false;
                break;
            }
        }

        cout << x << (p ? " eh primo" : " nao eh primo") << endl;
    }

    return 0;
}
