#include <iostream> 
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int arr[110][110];
int dist[110][110];
int ans[110];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n, k;

	cin >> m >> n >> k;

	for(int i = 0; i < n; i++)
		fill(dist[i], dist[i]+110, -1);

	for(int i = 0; i < k; i++){
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for(int j = x2-1; j >= x1; j--){
			for(int l = y2-1; l >= y1; l--){
				arr[j][l] = 1;
				// printf("(%d, %d)", j, l);
			}
		}
	}

	int res = 0;
	int cnt = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] != 1 && dist[i][j] < 0){
				res++;
				queue<pair<int, int>> Q;
				Q.push({i, j});
				dist[i][j] = 0;
				ans[cnt]++;

				while(!Q.empty()){
					auto tmp = Q.front();
					Q.pop();

					for(int dis = 0; dis < 4; dis++){
						int nx = tmp.first + dx[dis];
						int ny = tmp.second + dy[dis];

						if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if(arr[nx][ny] != 0 || dist[nx][ny] >= 0) continue;

						dist[nx][ny] = dist[tmp.first][tmp.second] + 1;
						Q.push({nx, ny});
						ans[cnt]++;
					}
				}
				cnt++;
			}
		}
	}

	cout << res << "\n";
	sort(ans, ans+res);

	for(int i = 0; i < res; i++)
		cout << ans[i] << " ";

	return 0;
}