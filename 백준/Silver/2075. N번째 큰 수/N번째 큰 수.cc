#include <iostream>
#include <algorithm>

using namespace std;

int arr[2250005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n*n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+(n*n));
    
    cout << arr[n*n-n];
    
}