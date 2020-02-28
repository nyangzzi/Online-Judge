#include <iostream>
#include <string>
using namespace std;

int arr[21] = {};

int main() {
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int m = 0;
	cin >> m;

	string str;

	for (int i = 0; i < m; i++) {
		cin >> str;
		int x = 0;

		if (str == "add") {
			cin >> x;
			arr[x] = 1;
		}
		else if (str == "remove") {
			cin >> x;
			arr[x] = 0;
		}
		else if (str == "check") {
			cin >> x;
			cout << arr[x] << "\n";
		}
		else if (str == "toggle") {
			cin >> x;
			if (arr[x]) arr[x] = 0;
			else arr[x] = 1;
		}
		else if (str == "all") {
			for (int j = 1; j < 21; j++) {
				arr[j] = 1;
			}
		}
		else if (str == "empty") {
			for (int j = 1; j < 21; j++) {
				arr[j] = 0;
			}
		}
	}
}
