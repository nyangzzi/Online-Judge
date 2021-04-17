#include <iostream>
using namespace std;

int main() {
	
	int arr[26] = {};

	char c;

	int max = 0;
	while (cin >> c) {

		if (c < 'a' || c>'z') continue;
		arr[c - 'a']++;
		if (arr[c - 'a'] > max) max = arr[c - 'a'];
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] == max) cout << char(i + 'a');
	}
	
}
