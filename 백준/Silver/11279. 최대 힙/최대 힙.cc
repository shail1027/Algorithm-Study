#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    priority_queue<int> mh;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int cmd;
        cin >> cmd;

        if(cmd == 0){
            if(mh.empty()) cout << "0\n";
            else{
                cout << mh.top() << "\n";
                mh.pop();
            }
        }
        else{
            mh.push(cmd);
        }
    }
}