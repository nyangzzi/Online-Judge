#include <iostream>
#include <string>
using namespace std;

int main() {

	string str,s;
	cin >> str;

	cout << str.substr(0, 1);
	for (size_t i = 1; i < str.size(); i++) {
		s = str.substr(i, 1);
		if (s == "-") {
			cout << str.substr(i + 1, 1);
		}
	}
	cout << "\n";
}
