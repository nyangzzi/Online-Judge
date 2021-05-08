#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n = 0;
	cin >> n;

	string before = "", after = "";

	cin >> before >> after;

	bool b = 0;

	if (n % 2 == 0) {
		if (before != after) b = 1;

	}
	else {
		for (int i = 0; i < before.size(); i++) {
			if (before[i] == after[i]) { b = 1; break; }
		}
	}

	if (b == 0) cout << "Deletion succeeded" << endl;
	else cout << "Deletion failed" << endl;

}
