#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie(nullptr);

    string n;
    stack<char> s;
    int cnt = 0;

    cin >> n;

    for(int i = 0; i < n.length(); i++){
        if(n[i] == '(') s.push('(');
        else{
            if(n[i-1] == '('){
                s.pop();
                cnt += s.size();
            }
            else{
                s.pop();
                cnt++;
            }
        }
    }

    cout << cnt;
}