#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        for(int j = 0; j < m; j++){
            int n = tmp[j] - '0';
            arr[i][j] = n;
        }
    }

    queue<pair<int, int>> BFS;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int visited[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            visited[i][j] = 0;

    visited[0][0] = 0;
    BFS.push({0, 0});
    while(!BFS.empty()){
        pair<int, int> cur = BFS.front();
        if(cur.first == n && cur.second == m) break;
        BFS.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(visited[nx][ny] || arr[nx][ny] != 1) continue;

            visited[nx][ny] = visited[cur.first][cur.second] + 1;
            BFS.push({nx, ny});
        }
    }

    cout << visited[n-1][m-1] + 1;
    
}