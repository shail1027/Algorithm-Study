#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int b1, b2, b3, coke, sprite;
    cin >> b1;
    cin >> b2;
    cin >> b3;
    cin >> coke;
    cin >> sprite;
 
    int bMin = min(b1, b2);
    bMin = min(bMin, b3);
    int dMin = min(coke, sprite);
    int ans = bMin + dMin - 50;
    cout << ans << endl;

}
