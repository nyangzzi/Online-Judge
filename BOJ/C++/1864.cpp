#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	
	while (1) {
		string str = "";
		cin >> str;
		if (str == "#") break;

		int sum = 0;
		for (int i = str.size() - 1; i >= 0; i--) {
			int n = 0;
			if (str[i] == '-') n = 0;
			else if (str[i] == '\\') n = 1;
			else if (str[i] == '(') n = 2;
			else if (str[i] == '@') n = 3;
			else if (str[i] == '?') n = 4;
			else if (str[i] == '>') n = 5;
			else if (str[i] == '&') n = 6;
			else if (str[i] == '%') n = 7;
			else if (str[i] == '/') n = -1;

			sum += n * pow(8, str.size() - i - 1);

		}

		cout << sum << endl;
	}
	
}
