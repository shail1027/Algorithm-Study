#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string bio;
    int n;
    regex pattern("^[A-F]?A+F+C+[A-F]?$");
    cin >> n;
    
    for(int i = 0; i < n; i++){

        cin >> bio;
        smatch m;
        if(regex_match(bio, pattern)){
            cout << "Infected!\n";
        }
        else cout << "Good\n";

    }
}