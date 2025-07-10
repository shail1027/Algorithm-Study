#include <iostream>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    int temp[n];

    for (int i = 1; i <= n; i++)
        arr[i - 1] = i;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        for(int k=a-1; k<b; k++)
            {
                temp[k] = arr[k];
            } 
        int cnt = b-1;
        for (int j = a - 1; j < b; j++)
        {
            arr[j] = temp[cnt];
            cnt--;
            
        }
    }

    for(int i=0; i<n; i++) printf("%d ", arr[i]);
}