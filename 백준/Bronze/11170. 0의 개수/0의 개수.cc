#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        int cnt = 0;
        for(int j=a; j<=b; j++){
            string temp = to_string(j);
            cnt += count(temp.begin(), temp.end(), '0');
        }
        printf("%d\n", cnt);
    }
}