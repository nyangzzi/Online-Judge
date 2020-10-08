#include <iostream>
#include <string>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (size_t i = 0; i < T; i++) {

		string str;
		cin >> str;
		
		int o = 0;
		string re;
		int sum = 0;

		for (size_t j = 0; j < str.length(); j++) {
			re = str.substr(j, 1);
			if (re == "O") {
				o++;
				sum = sum + o;
			}
			else if (re == "X") {
				o = 0;
			}
		}
		cout << sum << "\n";
	}
	
}
