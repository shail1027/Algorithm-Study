#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> m;

    for(int i = 0; i < n; i++){
        string txt;
        cin >> txt;

        int idx = txt.find(".");
        string res = txt.substr(idx+1, txt.length());
        m[res] += 1;
    }

    for(auto& i : m){
        cout << i.first << " " << i.second << "\n";
    }
}