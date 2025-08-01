#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> m;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string book;
        cin >> book;

        m[book] += 1;
    }

    string book = m.begin()->first;
    int max = m.begin()->second;
    for(const auto& p : m){
        if(p.second > max){
            max = p.second;
            book = p.first;
        }
    }

    cout << book;
}