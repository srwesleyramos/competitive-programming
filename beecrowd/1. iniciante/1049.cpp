#include <bits/stdc++.h>

using namespace std;

int main()
{
    string t1, t2, t3;

    cin >> t1 >> t2 >> t3;

    map<tuple<string, string, string>, string> animal = {
        {{"vertebrado", "ave", "carnivoro"}, "aguia"},
        {{"vertebrado", "ave", "onivoro"}, "pomba"},
        {{"vertebrado", "mamifero", "onivoro"}, "homem"},
        {{"vertebrado", "mamifero", "herbivoro"}, "vaca"},
        {{"invertebrado", "inseto", "hematofago"}, "pulga"},
        {{"invertebrado", "inseto", "herbivoro"}, "lagarta"},
        {{"invertebrado", "anelideo", "hematofago"}, "sanguessuga"},
        {{"invertebrado", "anelideo", "onivoro"}, "minhoca"}};

    cout << animal[{t1, t2, t3}] << endl;

    return 0;
}
