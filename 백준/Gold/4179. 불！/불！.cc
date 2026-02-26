#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int row, col;
char arr[1002][1002];
int dist1[1002][1002];
int dist2[1002][1002];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> col >> row;

    for(int i = 0; i < 1002; i++){
        fill(dist1[i], dist1[i]+1002, -1);
        fill(dist2[i], dist2[i]+1002, -1);
    }

    queue<pair<int, int>> Q1, Q2;

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'J'){
                dist1[i][j] = 0;
                Q1.push({i, j});
            }
            if(arr[i][j] == 'F'){
                dist2[i][j] = 0;
                Q2.push({i, j});
            }
        }
    }

    while(!Q2.empty()){
        auto tmp = Q2.front();
        Q2.pop();
        
        for(int i = 0; i < 4; i++){
            int nx = tmp.first + dx[i];
            int ny = tmp.second + dy[i];

            if(nx < 0 || nx >= col || ny < 0 || ny >= row) continue;
            if(arr[nx][ny] == '#' || dist2[nx][ny] >= 0) continue;

            dist2[nx][ny] = dist2[tmp.first][tmp.second] +1;
            Q2.push({nx, ny});
        }
    }

    while(!Q1.empty()){
        auto tmp = Q1.front();
        Q1.pop();

        for(int i = 0; i < 4; i++){
            int nx = tmp.first + dx[i];
            int ny = tmp.second + dy[i];

            if(nx < 0 || nx >= col || ny < 0 || ny >= row){
                cout << dist1[tmp.first][tmp.second] + 1;
                return 0;
            }
            if(dist1[nx][ny] >= 0 || arr[nx][ny] == '#') continue;
            if(dist2[nx][ny] != -1 && dist2[nx][ny] <= dist1[tmp.first][tmp.second] +1) continue;

            dist1[nx][ny] = dist1[tmp.first][tmp.second] +1;
            Q1.push({nx, ny});
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}
