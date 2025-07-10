#include <iostream>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1] = i;
    }

    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int temp = arr[a - 1];
        arr[a - 1] = arr[b - 1];
        arr[b - 1] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}