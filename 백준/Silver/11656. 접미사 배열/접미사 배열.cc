#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v;

    string word;
    cin >> word;
    int n = word.length();
    for(int i = 0; i < word.length(); i++){
        string substring;
        substring = word.substr(i, n-i);
        v.push_back(substring);
    }

    sort(v.begin(), v.end());

    for(auto str : v){
        cout << str << "\n";
    }
}
