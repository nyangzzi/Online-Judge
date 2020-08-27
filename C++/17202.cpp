#include <iostream>
#include <string>
using namespace std;

int main() {

	string str[15] = {};
	string s1 , s2;

	cin >> s1 >> s2;
	
	for (int i = 0; i < s1.size(); i++) {
		str[0] += s1[i];
		str[0] += s2[i];
	}

	for (int i = 0; i < 14; i++) {
		for (int j = 1; j < str[i].size(); j++) {
			int n = ((str[i][j] - '0') + (str[i][j - 1] - '0')) % 10;
			if (i < 13) {
				str[i + 1] += (n+'0');
			}
			else {
				cout << n;
			}
		}
	}

}
