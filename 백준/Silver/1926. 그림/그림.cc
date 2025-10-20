#include <iostream>
#include <queue>
#include <math.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    bool visited[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = false;
        }
    }

    int max = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0 || visited[i][j])
                continue;
            cnt++;
            queue<pair<int, int>> BFS;
            visited[i][j] = 1;
            BFS.push({i, j});
            int tmp = 0;
            while (!BFS.empty())
            {
                tmp++;
                pair<int, int> cur = BFS.front();
                BFS.pop();
                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;
                    if (visited[nx][ny] || arr[nx][ny] != 1)
                        continue;
                    visited[nx][ny] = 1;
                    BFS.push({nx, ny});
                }
            }
            max = tmp > max ? tmp : max;
        }
    }

    cout << cnt << "\n" << max;
}