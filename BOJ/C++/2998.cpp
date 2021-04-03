#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

	string str = "";
	cin >> str;

	int n = 0, num = 0;

	string s = "";
	for (int i = str.size() - 1; i >= 0; i--) {

		num += (str[i] - '0') * pow(2, n);
		n++;
		if (n == 3 || i == 0) { 
			s += num + '0';
			n = 0;
			num = 0;
		}
	}


	for (int i = s.size()-1; i >=0; i--) {
		cout << s[i];
	}

}
