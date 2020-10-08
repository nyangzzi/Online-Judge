#include <iostream>
#include <string>
using namespace std;

int main() {

	string str[2];

	cin >> str[0] >> str[1];
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < str[i].size(); j++) {
			if (str[i][j] == '6') str[i][j] = '5';
		}
	}

	cout << stoi(str[0]) + stoi(str[1]) << " ";

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < str[i].size(); j++) {
			if (str[i][j] == '5') str[i][j] = '6';
		}
	}

	cout << stoi(str[0]) + stoi(str[1]) << endl;

}
