#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    double coelhos = 0, ratos = 0, sapos = 0, total = 0;

    for (int i = 0; i < n; i++)
    {
        int q;
        char t;

        cin >> q >> t;

        switch (t)
        {
        case 'C':
            coelhos += q;
            total += q;
            break;
        case 'R':
            ratos += q;
            total += q;
            break;
        case 'S':
            sapos += q;
            total += q;
            break;
        }
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << (coelhos / total * 100) << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << (ratos / total * 100) << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << (sapos / total * 100) << " %" << endl;

    return 0;
}
