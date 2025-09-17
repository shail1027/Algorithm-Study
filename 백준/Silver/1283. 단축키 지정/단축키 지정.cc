#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    vector<char> shortcut;

    for (int i = 0; i < n; i++)
    {
        string cmd;
        getline(cin, cmd);

        string original = cmd;

        for (int j = 0; j < cmd.length(); j++)
        {
            cmd[j] = tolower(cmd[j]);
        }

        if (cmd[0] != ' ' && find(shortcut.begin(), shortcut.end(), cmd[0]) == shortcut.end())
        {
            cout << "[" << original[0] << "]" << original.substr(1, original.length() - 1) << "\n";
            shortcut.push_back(cmd[0]);
            continue;
        }

        bool isCheck = false;
        for (int k = 1; k < cmd.length(); k++)
        {
            if (cmd[k] != ' ' && cmd[k - 1] == ' ' && find(shortcut.begin(), shortcut.end(), cmd[k]) == shortcut.end())
            {
                cout << original.substr(0, k) << "[" << original[k] << "]" << original.substr(k + 1, original.length() - k - 1) << "\n";
                shortcut.push_back(cmd[k]);
                isCheck = true;
                break;
            }
        }

        if (isCheck)
            continue;
        for (int l = 1; l < cmd.length(); l++)
        {
            if (cmd[l] != ' ' && find(shortcut.begin(), shortcut.end(), cmd[l]) == shortcut.end())
            {
                cout << original.substr(0, l) << "[" << original[l] << "]" << original.substr(l + 1, original.length() - l - 1) << "\n";
                shortcut.push_back(cmd[l]);
                isCheck = true;
                break;
            }
        }

        if (isCheck)
            continue;
        cout << original << "\n";
    }
}