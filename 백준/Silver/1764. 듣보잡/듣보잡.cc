#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, int> mp;

    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        
        mp[name] += 1;
    }

    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        
        mp[name] += 1;
    }
    
    int cnt = 0;

    for(auto& i : mp){
        if(i.second == 2){
            cnt++;
        }
    }
    cout << cnt << "\n";
    for(auto& i : mp){
        if(i.second == 2){
            cout << i.first << "\n";
        }
    }

}