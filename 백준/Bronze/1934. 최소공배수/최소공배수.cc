#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int r = a % b;
	if (r == 0) {
		return b;
	}
	else {
		return gcd(b, r);
	}
	
}

int main() {
	int test;       
	int a, b;
	int lcd;      

	cin >>test;
	for (int i = 0; i < test; i++) {
		cin >> a >> b;

		lcd = (a * b) / (gcd(a, b));
		cout << lcd << "\n";
	}

}
