#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int num;            
	int d[50];    
	int n = 0;         

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> d[i];
	}

	sort(d, d + num);

    n = d[0] * d[num - 1];
	cout << n;
}