#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input[3], sorted[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> input[i];
    }

    copy(begin(input), end(input), sorted);
    sort(begin(sorted), end(sorted));

    for (int i = 0; i < 3; i++)
    {
        cout << sorted[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << input[i] << endl;
    }

    return 0;
}
