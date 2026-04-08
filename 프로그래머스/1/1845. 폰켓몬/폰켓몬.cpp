#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums)
{
    set<int> S(nums.begin(), nums.end());
    
    int answer = S.size() < nums.size()/2 ? S.size() : nums.size()/2;
    return answer;
}