#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    stack<char> stk;
    bool inside_tag = false;

    for (char ch : s) {
        if (ch == '<') {
            while (!stk.empty()) {
                cout << stk.top();
                stk.pop();
            }
            inside_tag = true;
            cout << ch;
        }
        else if (ch == '>') {
            inside_tag = false;
            cout << ch;
        }
        else if (inside_tag) {
            cout << ch;
        }
        else if (ch == ' ') {
            while (!stk.empty()) {
                cout << stk.top();
                stk.pop();
            }
            cout << ' ';
        }
        else {
            stk.push(ch); 
        }
    }
    while (!stk.empty()) {
        cout << stk.top();
        stk.pop();
    }

}
