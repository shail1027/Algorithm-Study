#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie(nullptr);

    deque<int> de;

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string cmd;
        cin >> cmd;

        if(cmd == "push_front"){
            int x;
            cin >> x;
            de.push_front(x);
        }
        else if(cmd == "push_back"){
            int x;
            cin >> x;
            de.push_back(x);
        }
        else if(cmd == "pop_front"){
            if(de.empty()) cout << "-1\n";
            else {
                cout << de.front() << "\n";
                de.pop_front();
            }
        }
        else if(cmd == "pop_back"){
            if(de.empty()) cout << "-1\n";
            else{
                cout << de.back() << "\n";
                de.pop_back();
            }
        }
        else if(cmd == "size") cout << de.size() << "\n";
        else if(cmd == "empty") cout << (de.empty() ? 1 : 0) << "\n";
        else if (cmd == "front") cout << (de.empty() ? -1 : de.front()) << "\n";
        else if(cmd == "back") cout << (de.empty() ? -1 : de.back()) << "\n";
    }
}