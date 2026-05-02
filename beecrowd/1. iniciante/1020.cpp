#include <bits/stdc++.h>

using namespace std;

int main() {
    int d, m, a;

    cin >> d;

    a = d / 365;
    d = d % 365;

    m = d / 30;
    d = d % 30;

    cout << a << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;

    return 0;
}
