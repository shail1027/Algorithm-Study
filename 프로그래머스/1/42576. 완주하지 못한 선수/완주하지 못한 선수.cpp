#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> m;
    
    for(const auto& i : participant){
        m[i] += 1;
        
    }
    
    for(const auto& i : completion){
        m[i] -= 1;
    }
    
    string answer = "";
    
    for(auto& i : m){
        if(i.second != 0) {
            answer = i.first;
            break;
        }
    }
    
    return answer;
    
}