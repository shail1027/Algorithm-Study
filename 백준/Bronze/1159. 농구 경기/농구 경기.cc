#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<char, int> mp;

    for(int i = 0; i < n; i++){
        string name;
        cin >> name;

        mp[name[0]] += 1;
    }

    bool isPossible = false;

    for(auto& i : mp){
        if(i.second >= 5) {
            cout << i.first;
            isPossible = true;
        }

    }

    if(!isPossible) cout << "PREDAJA";
}