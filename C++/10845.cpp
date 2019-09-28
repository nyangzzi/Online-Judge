#include <iostream>
#include <string>
using namespace std;

int main() {
	int arr[10001] = { };

	string str;
	int c = 0;
	cin >> c;

	int h = 0;
	int r = 0;

	for (int k = 0; k < c; k++) {
		cin >> str;
		
		if (str == "push") {
			int x = 0;
			cin >> x;
				arr[r] = x;
				r++;
		}
		else if (str == "pop") {
			if (h == r) {
				cout << -1 << endl;
			}
			else {
				cout << arr[h] << endl;
				h++;
			}
		}
		else if (str == "size") {
			cout << r - h << endl;
		}
		else if (str == "empty") {
			if (r == h) {
				cout << 1 << endl;
			}
			else cout << 0 << endl;
		}
		else if (str == "front") {
			if (h == r) {
				cout << -1 << endl;
			}
			else {
				cout << arr[h] << endl;
			}
		}
		else if (str == "back") {
			if (h == r) {
				cout << -1 << endl;
			}
			else {
				cout << arr[r-1] << endl;
			}
		}
	}
}
