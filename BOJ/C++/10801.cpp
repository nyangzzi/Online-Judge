#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int A = 0, B = 0;
	int a[10] = {};
	int b[10] = {};
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) A++;
		else if (a[i] < b[i])B++;
	}

	if (A > B) cout << "A" << endl;
	else if (A < B) cout << "B" << endl;
	else cout << "D" << endl;

}
