#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;
	cin >> str;
	string n;
	int num = 0;

	for (int i = 0; i < str.size(); i++) {
		n = str.substr(i, 1);

		if (n == "A" || n == "B" || n == "C") {
			num += 3;
		}
		else if (n == "D" || n == "E" || n == "F") {
			num += 4;
		}
		else if (n == "G" || n == "H" || n == "I") {
			num += 5;
		}
		else if (n == "J" || n == "K" || n == "L") {
			num += 6;
		}
		else if (n == "M" || n == "N" || n == "O") {
			num += 7;
		}
		else if (n == "P" || n == "Q" || n == "R" || n == "S") {
			num += 8;
		}
		else if (n == "T" || n == "U" || n == "V") {
			num += 9;
		}
		else {
			num += 10;
		}
	}

	cout << num << "\n";

}
