#include <iostream>
#include <string>
using namespace std;

int main() {

	int t = 0;
	cin >> t;

	while (t--) {
		string str = "";
		cin >> str;

		bool arr[26] = {};

		for (int i = 0; i < str.size(); i++) {
			arr[str[i] - 'A'] = 1;
		}

		int sum = 0;
		for (int i = 0; i < 26; i++) {
			if (arr[i] == 0) sum += ('A' + i);
		}

		cout << sum << endl;

	}
}
