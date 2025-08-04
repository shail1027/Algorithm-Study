#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> mp;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string tree;
    int total = 0;

    while (getline(cin, tree))
    {
        mp[tree] += 1;
        total++;
    }

    for (auto &i : mp)
    {
        cout << fixed;
        cout.precision(4);
        cout << i.first << " " << (100.0 * i.second / total) << "\n";
    }
}