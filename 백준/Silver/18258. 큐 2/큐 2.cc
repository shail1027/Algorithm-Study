#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    int n;
    cin >> n;

    queue<int> que;

    for (int i = 0; i < n; i++)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "pop")
        {
            if (que.empty())
                cout << "-1" << "\n";
            else
            {
                cout << que.front() << "\n";
                que.pop();
            }
        }

        else if (cmd == "size")
        {
            cout << que.size() << "\n";
        }

        else if (cmd == "empty")
        {
            cout << (que.empty() ? 1 : 0) << "\n";
        }

        else if (cmd == "front")
        {
            if (que.empty())
                cout << "-1" << "\n";
            else
                cout << que.front() << "\n";
        }

        else if (cmd == "back")
        {
            if (que.empty())
                cout << "-1" << "\n";
            else
                cout << que.back() << "\n";
        }

        else
        {
            int x;
            cin >> x;
            que.push(x);
        }
    }
}