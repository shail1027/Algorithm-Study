#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    map<string, int> m;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string name;
        cin >> name;

        m[name] += 1;
    }

    for(int i = 0; i < n - 1; i++){
        string name;
        cin >> name;

        m[name] -= 1;
    }

    for(auto& x : m){
        if(x.second != 0 ) cout << x.first;
    }

}   