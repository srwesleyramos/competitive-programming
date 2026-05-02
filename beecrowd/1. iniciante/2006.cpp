#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, s, r = 0;

    cin >> t;

    for (int i = 0; i < 5; i++) {
        cin >> s;

        if (t == s) r++;
    }

    cout << r << endl;
    
    return 0;
}
