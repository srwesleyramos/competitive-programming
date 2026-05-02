#include <bits/stdc++.h>

using namespace std;

float tabela[] = {4.00, 4.50, 5.00, 2.00, 1.50};

int main()
{
    int c, q;

    cin >> c >> q;
    cout << "Total: R$ " << fixed << setprecision(2) << (tabela[c - 1] * q) << endl;

    return 0;
}
