#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int pa, pb;
        double ga, gb;

        cin >> pa >> pb >> ga >> gb;

        int anos = 0;

        while (pa <= pb)
        {
            pa += pa * ga / 100;
            pb += pb * gb / 100;

            if (++anos > 100)
            {
                break;
            }
        }

        if (anos == 101)
        {
            cout << "Mais de 1 seculo." << endl;
        }
        else
        {
            cout << anos << " anos." << endl;
        }
    }

    return 0;
}
