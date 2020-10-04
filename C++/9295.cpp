#include <iostream>
using namespace std;

int main() {

	int test = 0;
	cin >> test;

	for (int i = 1; i <= test; i++) {
		int a = 0, b = 0;
		cin >> a >> b;
		cout << "Case " << i << ": " << a + b << "\n";
	}
	
}
