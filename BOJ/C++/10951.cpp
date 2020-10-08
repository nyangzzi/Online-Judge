#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	int t = 0;

	while (1) {
		cin >> a >> b;
		t = a;
		if ((t = cin.get()) == EOF) break;
		cout << a + b << endl;
		
	}
}
