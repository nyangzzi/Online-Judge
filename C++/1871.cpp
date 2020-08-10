#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int test = 0;
	cin >> test;

	while (test--) {
		string str;
		cin >> str;

		int a = ((str[0] - 'A') * pow(26, 2)) + ((str[1] - 'A') * pow(26, 1)) + ((str[2] - 'A') * pow(26, 0));
		int b = ((str[4] - '0') * pow(10, 3)) + ((str[5] - '0') * pow(10, 2)) + ((str[6] - '0') * pow(10, 1)) + ((str[7] - '0') * pow(10, 0));

		if (a > b) {
			if (a - b <= 100) {
				cout << "nice\n";
			}
			else {
				cout << "not nice\n";
			}
		}
		else {
			if (b - a <= 100) {
				cout << "nice\n";
			}
			else {
				cout << "not nice\n";
			}
		}
	}
}
