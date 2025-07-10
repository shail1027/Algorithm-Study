#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    string reverse_a = to_string(a);
    reverse(reverse_a.begin(), reverse_a.end());

    string reverse_b = to_string(b);
    reverse(reverse_b.begin(), reverse_b.end());

    int comp = atoi(reverse_a.c_str()) > atoi(reverse_b.c_str()) ? atoi(reverse_a.c_str()) : atoi(reverse_b.c_str());

    printf("%d", comp);
    
}