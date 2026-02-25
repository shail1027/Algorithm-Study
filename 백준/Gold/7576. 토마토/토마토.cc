#include <queue>
#include <stdlib.h>
#include <iostream>
using namespace std;

int arr[1002][1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int v[1002][1002];
int row, col;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<pair<int, int>> Q;

    cin >> row >> col;

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                Q.push({i, j});
                v[i][j] = 0;
            }
            else v[i][j] = -1;
        }
    }

    while(!Q.empty()){
        pair<int, int> current = Q.front();
        Q.pop();

        for(int dir = 0; dir < 4; dir++){
            int nx = current.first + dx[dir];
            int ny = current.second + dy[dir];

            if(v[nx][ny] >= 0 || arr[nx][ny] != 0) continue;
            if(nx < 0 || nx >= col || ny < 0 || ny >= row) continue;
            v[nx][ny] = v[current.first][current.second]+1;
            Q.push({nx, ny});
        }

    }

    int total = 0;

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            if(v[i][j] == -1 && arr[i][j] == 0) {
                cout << -1; 
                return 0;
            }
            total = max(total, v[i][j]);
        }
    }
    cout << total;

}
