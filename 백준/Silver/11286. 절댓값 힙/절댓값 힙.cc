#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

struct cmp{
    bool operator()(int a, int b){
        if(abs(a) == abs(b)){
            return a > b;
        }
        else return abs(a) > abs(b);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, cmp> mp;

    for(int i = 0; i < n; i++){
        int cmd;
        cin >> cmd;

        if(cmd == 0){
            if(mp.empty()) cout << "0\n";
            else{
                cout << mp.top() << "\n";
                mp.pop();
            }   
        }
        else{
            mp.push(cmd);
        }
    }
}