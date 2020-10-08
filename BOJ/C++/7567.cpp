#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int i = 0;
	int high = 10;
	while (1) {

		if (str[i+1] == NULL) break;

		if (str[i] == str[i+1]) {
			high = high + 5;
		}
		else {
			high = high + 10;
		}
		i++;
	}

	cout << high << endl;
}
