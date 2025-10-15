#include <iostream>
#include <queue>

using namespace std;
 
const int MAX = 100005;
int N, K;
bool visited[MAX] = { 0, };
int path[MAX];
queue<int> q;

void BFS(int v) {
    path[v] = 0;
    visited[v] = true;
    q.push(v);
 
    while (!q.empty()) {
        int w = q.front();
        if (w == K) break;
        q.pop();
 
        if (visited[w + 1] == 0 && w + 1 >= 0 && w + 1 < MAX) {
            visited[w + 1] = true;
            q.push(w + 1);
            path[w + 1] = path[w] + 1;
        }
        if (visited[w - 1] == 0 && w - 1 >= 0 && w - 1 < MAX) {
            visited[w - 1] = true;
            q.push(w - 1);
            path[w - 1] = path[w] + 1;
        }
        if (visited[w * 2] == 0 && w * 2 >= 0 && w * 2 < MAX) {
            visited[w * 2] = true;
            q.push(w * 2);
            path[w * 2] = path[w] + 1;
        }
    }
 
}
 
int main() {
    cin >> N >> K;
 
    BFS(N);
 
    cout << path[K];
}
