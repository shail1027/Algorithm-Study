#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int n; cin >> n;
    stack<pair<int, int>> stk;

    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;

        if(stk.empty()){
            cout << "0" << " ";
            stk.push({i, num});
        }
        else{
            while(!stk.empty()){
                if(stk.top().second > num){
                    cout << stk.top().first << " ";
                    break;
                }
                else stk.pop();
            }

            if(stk.empty()){
            cout << "0" << " ";
            }
            
            stk.push({i, num});
        }
    }
}