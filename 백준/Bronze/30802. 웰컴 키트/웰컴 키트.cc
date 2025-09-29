#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    int size[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> size[i];
    }

    int t, p;
    cin >> t >> p;

    int totalT = 0;
    for (int i = 0; i < 6; i++)
    {
        if (size[i] % t == 0) totalT += (size[i] / t);
        else totalT += size[i] / t + 1;
    }
    cout << totalT << "\n";
    cout << num / p << " " << num % p;
}
