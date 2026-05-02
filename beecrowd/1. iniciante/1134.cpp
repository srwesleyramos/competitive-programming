#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 0, g = 0, d = 0, op;

    while (cin >> op) {
        if (op == 1) {
            a++;
        }

        if (op == 2) {
            g++;
        }

        if (op == 3) {
            d++;
        }

        if (op == 4) {
            break;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g<< endl;
    cout << "Diesel: " << d << endl;

    return 0;
}
