#include <iostream>
#include <string>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0;
	cin >> n;
	
	int alphabet[26] = {};
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		alphabet[str[0] - 'a']++;
	}
	
	bool b = 0;
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] >= 5) {
			cout << (char)(i + 'a');
			b = 1;
		}
	}

	if (!b) {
		cout << "PREDAJA";
	}

	cout << endl;
}
