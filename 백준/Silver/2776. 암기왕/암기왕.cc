#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        unordered_set<int> v;
        int N;
        cin >> N;
        for(int j = 0; j < N; j++){
            int n;
            cin >> n;
            v.insert(n);
        }
        
        int M;
        cin >> M;
        for(int k = 0; k < M; k++){
            int m;
            cin >> m;
            if(v.count(m)){
                cout << "1\n";
            }
            else cout << "0\n";
        }
    }
}