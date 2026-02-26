#include<vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<vector<int> > maps)
{
    queue<pair<int, int>> Q;
    int dist[105][105];
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    for(int i = 0; i < 105; i++)
        fill(dist[i], dist[i]+105, -1);
    
    dist[0][0] = 1;
    Q.push({0, 0});
    
    while(!Q.empty()){
        auto tmp = Q.front();
        Q.pop();
        
        for(int i = 0; i < 4; i++){
            int nx = tmp.first + dx[i];
            int ny = tmp.second + dy[i];
            
            if(nx < 0 || nx >= maps.size() || ny < 0 || ny >= maps[0].size()) continue;
            if(maps[nx][ny] != 1 || dist[nx][ny] >= 0) continue;
            
            dist[nx][ny] = dist[tmp.first][tmp.second] + 1;
            Q.push({nx, ny});
        }
    }
    
    int answer = 0;
    
    if(dist[maps.size()-1][maps[0].size()-1] == -1) return -1;
    else return dist[maps.size()-1][maps[0].size()-1];
}