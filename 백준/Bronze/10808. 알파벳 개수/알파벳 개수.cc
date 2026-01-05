#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[26] = {0,};

    string str;
    
    cin >> str;

    for(char c : str){
        arr[c - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }
}