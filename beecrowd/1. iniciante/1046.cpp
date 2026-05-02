#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, f;

    cin >> i >> f;

    if (f <= i) {
        f += 24;
    }

    cout << "O JOGO DUROU " << (f - i) << " HORA(S)" << endl;

    return 0;
}
