#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int n = numbers.size();
    sort(numbers.begin(), numbers.end());
    
    int answer = numbers[n-1] * numbers[n-2];
    return answer;
    
    
}