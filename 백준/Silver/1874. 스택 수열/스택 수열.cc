#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    stack<int> stk;
    vector <char> ans;

    cin >> n;
    int num = 1;
    int x;

    for(int i = 0; i < n; i++){
        cin >> x;
        if(!stk.empty() && stk.top() == x){
            stk.pop();
            ans.push_back('-');;
        }
        else if(num <= x){
            while(num <= x){
                stk.push(num);
                num++;
                ans.push_back('+');;
            }
            stk.pop();
            ans.push_back('-'); 
        }
        else if(!stk.empty() && stk.top() > x){
            cout << "NO";
            return 0;
        }
        
    }

   for (auto i : ans) {
		cout << i << "\n"; 
	}
}