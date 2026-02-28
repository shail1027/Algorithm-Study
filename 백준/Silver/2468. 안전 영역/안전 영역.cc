#include <iostream>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int arr[110][110];
int dist[110][110];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	set<int> s;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			s.insert(arr[i][j]);
		}
	}

	int max = 1;

	for (int num : s)
	{
		queue<pair<int, int>> BFS;

		for (int j = 0; j < n; j++)
			fill(dist[j], dist[j] + 110, -1);

		int cnt = 0;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (arr[i][j] > num && dist[i][j] < 0)
				{
					// cout << arr[i][j] << " ";
					BFS.push({i, j});
					dist[i][j] = 0;

					cnt++;
					while (!BFS.empty())
					{
						auto tmp = BFS.front();
						BFS.pop();

						for (int dis = 0; dis < 4; dis++)
						{
							int nx = tmp.first + dx[dis];
							int ny = tmp.second + dy[dis];

							if (nx < 0 || nx >= n || ny < 0 || ny >= n)
								continue;
							if (arr[nx][ny] <= num || dist[nx][ny] >= 0)
								continue;

							dist[nx][ny] = dist[tmp.first][tmp.second] + 1;
							BFS.push({nx, ny});
						}
					}
				}
			}
		}
		if(cnt > max) max = cnt;
	}

	cout << max;

	return 0;
}