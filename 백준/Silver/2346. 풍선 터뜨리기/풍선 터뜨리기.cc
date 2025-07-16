#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> deq;

    for (int i = 1; i <= n; i++)
    {
        deq.push_back(i);
    }

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    int k;

    while (deq.size() > 0)
    {
        cout << deq.front() << " ";
        k = arr[deq.front() - 1];
        deq.pop_front();

        if (k > 0)
        {
            for (int i = 0; i < k - 1; i++)
            {
                int tmp = deq.front();
                deq.push_back(tmp);
                deq.pop_front();
            }
        }
        else if (k < 0)
        {
            for (int i = 0; i < abs(k); i++)
            {
                int tmp = deq.back();
                deq.push_front(tmp);
                deq.pop_back();
            }
        }
    }
}