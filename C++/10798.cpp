#include <iostream>
#include <string>
using namespace std;

int main() {

	string str[5] = {};

	int max = 0;
	for (int i = 0; i < 5; i++) {
		cin >> str[i];
		if (str[i].size() > max) {
			max = str[i].size();
		}
	}

	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 5; j++) {
			if (str[j].size()-1 < i) {
				continue;
			}
			cout << str[j][i];
		}
	}
}
