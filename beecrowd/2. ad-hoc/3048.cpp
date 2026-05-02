// 3048

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count, last, result = 0;
    int v[500];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        count = 0;
        last = -1;

        for (int j = i; j < n; j++) {
            
            if (last != v[j]) {
                count++;
                last = v[j];
            }

        }

        result = max(count, result);
    }

    cout << result << endl;

    return 0;
}
