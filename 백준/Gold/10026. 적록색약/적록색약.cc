#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

char arr[110][100];
int dist1[110][110];
int dist2[110][110];

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;

	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
		fill(dist1[i], dist1[i]+110, -1);
		fill(dist2[i], dist2[i]+110, -1);
	}

	queue<pair<int, int>> Q1, Q2;

	int cnt1 = 0, cnt2 = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr[i][j] == 'R' && dist1[i][j] < 0 || arr[i][j] == 'G' && dist1[i][j] < 0 || arr[i][j] == 'B' && dist1[i][j] < 0 ){
				char cur = arr[i][j];
				dist1[i][j] = 0;
				Q1.push({i, j});
				cnt1++;

				while(!Q1.empty()){
					auto tmp = Q1.front();
					Q1.pop();

					for(int dis = 0; dis < 4; dis++){
						int nx = tmp.first + dx[dis];
						int ny = tmp.second + dy[dis];

						if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if(arr[nx][ny] != cur || dist1[nx][ny] >= 0) continue;

						dist1[nx][ny] = dist1[tmp.first][tmp.second] + 1;
						Q1.push({nx, ny});
					}
				}
			}

			if(arr[i][j] == 'R' && dist2[i][j] < 0 || arr[i][j] == 'G' && dist2[i][j] < 0 || arr[i][j] == 'B' && dist2[i][j] < 0){
				char cur = arr[i][j];
				dist2[i][j] = 0;
				Q2.push({i, j});

				cnt2++;

				while(!Q2.empty()){
					auto tmp = Q2.front();
					Q2.pop();

					for(int dis = 0; dis < 4; dis++){
						int nx = tmp.first + dx[dis];
						int ny = tmp.second + dy[dis];

						if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if(cur == 'R' || cur == 'G'){
							if(arr[nx][ny] == 'B' || dist2[nx][ny] >= 0) continue;
						}
						else if(arr[nx][ny] != cur || dist2[nx][ny] >= 0) continue;

						dist2[nx][ny] = dist2[tmp.first][tmp.second] + 1;
						Q2.push({nx, ny});
					}
				}
			}
		}
	}

	cout << cnt1 << " " << cnt2;

	return 0;
}