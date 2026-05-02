#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h;
    float v;
    
    cin >> n >> h >> v;
    cout << "NUMBER = " << n << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << (h * v) << endl;

    return 0;
}
