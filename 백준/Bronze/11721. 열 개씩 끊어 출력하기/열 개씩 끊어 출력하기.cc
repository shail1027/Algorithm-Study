#include <iostream>
#include <string>

using namespace std;

int main(void) {
    std::string str, arr[10000];
    cin >> str; 
    int str_length = str.length(); 

    for(int i = 0; i < (str_length / 10 + 1); i++ ) {   
        arr[i] = str.substr(10*i, 10);                 
        cout << arr[i] << endl;
    } 

}