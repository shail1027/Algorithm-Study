#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string num;
    cin >> num;
    int sum = 0;
    string n = "";
    for(int i = 0; i < num.length(); i++){
        if(i+1 == num.length()) {
            n += num[i];
            sum += atoi(n.c_str());
        }
        else if(num[i] != ','){
            n += num[i];
        }
        else{
            sum += atoi(n.c_str());
            n = "";
        }
    }

    cout << sum;
}