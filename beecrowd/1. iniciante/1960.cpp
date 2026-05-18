#include <bits/stdc++.h>

using namespace std;

pair<int, string> romano[] = {
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}};

int main()
{
    int n;

    cin >> n;

    string s;

    for (auto r : romano)
    {
        while (n >= r.first)
        {
            n -= r.first;
            s += r.second;
        }
    }

    cout << s << endl;

    return 0;
}
