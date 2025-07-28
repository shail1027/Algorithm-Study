#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie(nullptr);

    string word;
    cin >> word;

    stack<char> stk;

    int temp = 1;
    int ans = 0;
    char pr = ' ';
    for(int i = 0; i < word.length(); i++){
        if(word[i] == '('){
            stk.push(word[i]);
            temp *= 2;
        }
        if(word[i] == '['){
            stk.push(word[i]);
            temp *= 3;
        }
        if(word[i] == ')'){
            if(stk.empty()) {
                cout << "0";
                return 0;
            }
            if(stk.top() != '('){
                cout << "0";
                return 0;
            }
            stk.pop();

            if(pr == '('){
                ans += temp;
                temp /= 2;
            }
            else temp /= 2;
        }
        if(word[i] == ']'){
            if(stk.empty()) {
                cout << "0";
                return 0;
            }
            if(stk.top() != '['){
                cout << "0";
                return 0;
            }
            stk.pop();

            if(pr == '['){
                ans += temp;
                temp /= 3;
            }
            else temp /= 3;
        }
        pr = word[i];
    }
    if(!stk.empty()) {
        cout << "0";
        return 0;
    }
    cout << ans;
}