#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int n;
    cin >> n;
    queue<int> q;

    for(int i = 0; i < n; i++){
        string cmd;
        cin >> cmd;

        if(cmd == "push"){
            int x;
            cin >> x;
            q.push(x);
        }
        if(cmd == "front"){
            if(q.empty()) cout << "-1\n";
            else cout << q.front() << "\n";
        }
        if(cmd == "back"){
            if(q.empty()) cout << "-1\n";
            else cout << q.back() << "\n";
        }
        if(cmd == "size") cout << q.size() << "\n";
        if(cmd == "pop"){
            if(q.empty()) cout << "-1\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        } 
        if(cmd == "empty"){
            if(q.empty()) cout << "1\n";
            else cout << "0\n";
        }
    }
}