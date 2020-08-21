#include <iostream>
using namespace std;

int main() {
	
	int l = 0, p = 0;
	cin >> l >> p;

	for (int i = 0; i < 5; i++) {
		int n = 0;
		cin >> n;
		cout << n - l * p << " ";
	}

}
