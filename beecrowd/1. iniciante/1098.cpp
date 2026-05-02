#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int k = 0; k <= 10; k++)
    {
        double i = k * 0.2;

        for (int p = 1; p <= 3; p++) {
            double j = i + p;

            cout << "I=" << i << " J=" << j << endl;
        }
    }

    return 0;
}
