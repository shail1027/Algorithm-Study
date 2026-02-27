#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int arr[60][60];
int dist[60][60];

int n, m, k;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> m >> n >> k;
		queue<pair<int, int>> Q;

		for (int l = 0; l < 60; l++)
		{
			fill(arr[l], arr[l] + 60, 0);
			fill(dist[l], dist[l] + 60, -1);
		}

		for (int j = 0; j < k; j++)
		{
			int x, y;
			cin >> x >> y;

			arr[x][y] = 1;
		}

		int ans = 0;
		for (int h = 0; h < m; h++)
		{
			for (int w = 0; w < n; w++)
			{
				if (arr[h][w] == 1 && dist[h][w] == -1)
				{
					dist[h][w] = 0;
					Q.push({h, w});
					while (!Q.empty())
					{
						auto tmp = Q.front();
						// cout << "tmp : " << tmp.first << " " << tmp.second << endl;
						Q.pop();

						for (int dir = 0; dir < 4; dir++)
						{
							int nx = tmp.first + dx[dir];
							int ny = tmp.second + dy[dir];

							if (nx < 0 || nx >= m || ny < 0 || ny >= n)
								continue;
							if (arr[nx][ny] != 1 || dist[nx][ny] >= 0)
								continue;

							dist[nx][ny] = dist[tmp.first][tmp.second] + 1;
							Q.push({nx, ny});
						}
					}
					ans++;
				}
			}
		}

		cout << ans << "\n";
	}
}