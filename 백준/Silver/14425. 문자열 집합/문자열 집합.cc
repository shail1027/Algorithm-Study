#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_set<string> s;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        s.insert(temp);
    }

    int cnt = 0;
    for (int i = 0; i < m; i++) {
        string temp;
        cin >> temp;
        if (s.count(temp)) cnt++;
    }

    cout << cnt;
}
