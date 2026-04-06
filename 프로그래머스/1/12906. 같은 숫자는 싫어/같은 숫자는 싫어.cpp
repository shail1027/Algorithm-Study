#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{    
    vector<int> tmp(arr);
        
    auto last = unique(tmp.begin(), tmp.end());
    
    tmp.erase(last, tmp.end());
        
    return tmp;
}