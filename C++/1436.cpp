#include <iostream>
#include <string>
using namespace std;

int main() {

	int input = 0;
	cin >> input;

	int i = 2;
	int j = 0;

	string str;
	if (input == 1) {
		str = "666";
	}
	else {
		int i = 2;
		while (i <= input) {
			j++;
			if (j % 1000 == 666) {
				for (int n = 0; n < 1000; n++) {
					if (n < 10) {
						str = to_string(j) + "00" + to_string(n);
						i++;
					}
					else if (n < 100) {
						str = to_string(j) + "0" + to_string(n);
						i++;
					}
					else {
						str = to_string(j) + to_string(n);
						i++;
					}
					if (i > input) break;
				}
			}

			else if (j % 100 == 66) {
				for (int n = 0; n < 100; n++) {
					if (n < 10) {
						str = to_string(j) + "60" + to_string(n);
						i++;
					}
					else {
						str = to_string(j) + "6" + to_string(n);
						i++;
					}
					if (i > input) break;
				}
			}

			else if (j % 10 == 6) {
				for (int n = 0; n < 10; n++) {
					str = to_string(j) + "66" + to_string(n);
					i++;
					if (i > input) break;
				}
			}

			else {
				str = to_string(j) + "666";
				i++;
			}
		}
	}

	cout << str << endl;
}
