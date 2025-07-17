#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        int num, idx;
        cin >> num >> idx;
        for (int j = 0; j < num; j++)
        {
            int imp;
            cin >> imp;
            q.push({imp, j});
            pq.push(imp);
        }
        int cnt = 0;
        while (!q.empty())
        {
            int import = q.front().first;
            int index = q.front().second;
            q.pop();
            if (pq.top() == import)
            {
                pq.pop();
                cnt++;
                if (index == idx)
                {
                    cout << cnt << "\n";
                    break;
                }
            }
            else
            {
                q.push({import, index});
            }
        }
    }
}