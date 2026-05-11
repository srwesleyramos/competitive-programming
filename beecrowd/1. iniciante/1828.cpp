#include <bits/stdc++.h>

using namespace std;

map<string, vector<string>> rules = {
    {"pedra", {"lagarto", "tesoura"}},
    {"tesoura", {"papel", "lagarto"}},
    {"papel", {"pedra", "Spock"}},
    {"lagarto", {"Spock", "papel"}},
    {"Spock", {"pedra", "tesoura"}},
};

bool win(string S, string R)
{
    vector<string> match = rules[S];

    return find(match.begin(), match.end(), R) != match.end();
}

int main()
{
    int T;

    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        string S, R;

        cin >> S >> R;

        if (S == R)
        {
            cout << "Caso #" << i << ": De novo!" << endl;
        }
        else if (win(S, R))
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else
        {
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
    }

    return 0;
}
