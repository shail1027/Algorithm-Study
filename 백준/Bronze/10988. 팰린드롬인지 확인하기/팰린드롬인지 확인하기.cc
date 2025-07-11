#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    string word;

    cin >> word;
    string copy = word;

    reverse(word.begin(), word.end());

    if(word == copy) printf("1");
    else printf("0");
}