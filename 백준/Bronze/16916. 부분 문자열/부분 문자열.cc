#include <iostream>
#include <cstring>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string word;
    cin >> word;

    string sub;
    cin >> sub;

    if(strstr(word.c_str(), sub.c_str()) != NULL){
        cout << "1";
    }
    else cout << "0";
}