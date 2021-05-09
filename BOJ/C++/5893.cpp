#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string n = "";
	cin >> n;

	string n16 = n + "0000";

	for (int i = n.size() - 1; i >= 0; i--) {
		n16[i + 4] = (n[i] - '0') + (n16[i + 4] - '0') + '0';
	}

	for (int i = n16.size() - 1; i > 0; i--) {
		while (n16[i] > '1') {
			n16[i-1]++;
			n16[i] -= 2;
		}
	}

	string n17 = "";
	while (n16[0] > '1') {
		n17 += "1";
		n16[0]-=2;
	}

	n17 += n16;
	cout << n17 << endl;

}
