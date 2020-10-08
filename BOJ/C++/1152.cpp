#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;

	getline(cin, str);
	string a;

	int cnt = 1;

	for (int i = 0; i < str.size()-1; i++) {

		a = str.substr(i, 1);

		if (a == " ") {
			cnt++;
		}

	}

	if (str.substr(0, 1) == " ") {
		cnt--;
	}

	cout << cnt << "\n";

}
