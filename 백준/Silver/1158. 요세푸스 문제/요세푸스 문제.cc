#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int n, k;
    cin >> n;
    cin >> k;

    queue<int> que;
    for(int i = 1; i <= n; i++) que.push(i);

    cout << "<";
    while(que.size() > 1){
        for(int i = 1; i < k; i++){
            int temp = que.front();
            que.pop();
            que.push(temp);
        }
        cout << que.front() << ", ";
        que.pop();
    }
    cout << que.front() << ">";
}