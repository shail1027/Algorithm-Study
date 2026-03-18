#include <iostream>
#include <math.h>
using namespace std;

void hanoi(int n, int start, int end, int sub);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	cout << (1 << n) - 1 << "\n";
	
	hanoi(n, 1, 3, 2);
	
	return 0;
}

void hanoi(int n, int start, int end, int sub){
	if(n == 1) {
		cout << start << " " << end << "\n";
		return;
	}

	hanoi(n-1, start, sub, end);

	cout << start << " " << end << "\n";

	hanoi(n-1, sub, end, start);
}