#include <iostream>
using namespace std;

int main() {

	int test = 0;
	cin >> test;

	while (test--) {
		int sweat = 0;
		int brother = 0;

		cin >> sweat >> brother;

		cout << "You get " << sweat / brother << " piece(s) and your dad gets " << sweat % brother << " piece(s).\n";
	}
}
