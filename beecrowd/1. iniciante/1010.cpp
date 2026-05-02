#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, u1, u2;
    float v1, v2;
    
    cin >> c >> u1 >> v1 >> c >> u2 >> v2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (u1 * v1 + u2 * v2) << endl;

    return 0;
}
