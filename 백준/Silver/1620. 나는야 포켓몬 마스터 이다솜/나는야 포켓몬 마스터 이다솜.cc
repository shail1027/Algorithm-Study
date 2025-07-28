#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    string *arr = new string[n];
    unordered_map<string, int> mp;

    for(int i = 1; i <= n; i++){
        string temp;
        cin >> temp;

        mp.insert({temp, i});
        arr[i-1] = temp;
    }

    for(int i = 0; i < m; i++){
        string temp;
        cin >> temp;
        if(isdigit(temp[0])){
            int num = stoi(temp.c_str());
            cout << arr[num-1] << "\n";
        }
        else{
            cout << mp.find(temp)->second << "\n";
        }
    }

}