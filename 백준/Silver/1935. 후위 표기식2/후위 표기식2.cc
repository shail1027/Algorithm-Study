#include <iostream>
#include <string>
#include <stack>
#include <utility>

using namespace std;

double add(double a, double b)
{
    return a + b;
}

double sub(double a, double b)
{
    return a - b;
}

double multi(double a, double b)
{
    return a * b;
}

double divi(double a, double b)
{
    return a / b;
}

int main()
{
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int n;
    cin >> n;

    stack<double> stk;
    pair<char, double> arr[n];

    char letter[26];
    int *num = new int[n];

    for (int i = 0; i < n; i++)
    {
        letter[i] = 'A' + i;
    }

    string prob;
    cin >> prob;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        arr[i].first = 'A' + i;
        arr[i].second = num;
    }

    for (int i = 0; i < prob.size(); i++)
    {
        int temp = prob[i];

        if (isalpha(prob[i]))
        {
            int idx = int(prob[i]) - 65;
            stk.push(arr[idx].second);
        }
        else
        {   
            double a, b;
            b = stk.top();
            stk.pop();
            a = stk.top();
            stk.pop();
            if (prob[i] == '+')
            {
                stk.push(add(a, b));
            }
            if(prob[i] == '-'){
                stk.push(sub(a, b));
            }
            if(prob[i] == '/'){
                stk.push(divi(a, b));
            }
            if(prob[i] == '*'){
                stk.push(multi(a, b));
            }
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << stk.top();
}