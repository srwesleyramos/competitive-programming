#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vetor[4];

    cin >> vetor[0] >> vetor[1] >> vetor[2] >> vetor[3];

    sort(begin(vetor), end(vetor));

    if (
        vetor[0] + vetor[1] > vetor[2] ||
        vetor[0] + vetor[1] > vetor[3] ||
        vetor[0] + vetor[2] > vetor[3] ||
        vetor[1] + vetor[2] > vetor[3])
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}
