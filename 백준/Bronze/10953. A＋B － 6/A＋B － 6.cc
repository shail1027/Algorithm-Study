#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string t;
        cin >> t;
        char a = t[0];
        char b = t[2];

        int na = a - '0';
        int nb = b - '0';
        cout << na+nb << "\n";
    }
}