#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(;;){
        map<string, string> m;
        int n;
        cin >> n;
        if(n == 0) break;
        for(int j = 0; j < n; j++){
            string str;
            cin >> str;
            string cpy = str;
            for_each(str.begin(), str.end(), [](auto& c){c = tolower(c);});
            m[str] = cpy;
        }
        for(auto& i : m){
            cout << i.second << "\n";
            break;
        }
    }
}