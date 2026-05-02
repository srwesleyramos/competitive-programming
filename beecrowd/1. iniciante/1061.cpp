#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;

    scanf("Dia %d", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf(" Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    int seconds = (d2 - d1) * 86400  + (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
    
    int minutes = seconds / 60;
    seconds = seconds % 60;

    int hours = minutes / 60;
    minutes = minutes % 60;

    int days = hours / 24;
    hours = hours % 24;

    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}
