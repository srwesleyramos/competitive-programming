#include <bits/stdc++.h>

using namespace std;

int main()
{
    string text;
    int soma = 0;

    while (cin >> text)
    {
        if (text != "caw")
        {
            if (text[0] == '*')
            {
                soma += 4;
            }

            if (text[1] == '*')
            {
                soma += 2;
            }

            if (text[2] == '*')
            {
                soma += 1;
            }
        }
        else
        {
            cout << soma << endl;

            soma = 0;

            cin >> text;
        }
    }

    return 0;
}
