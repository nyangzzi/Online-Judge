#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	string str = "";
	cin >> str;

	string s = "";
	int i = str.size();
	while(i >= 0) {
		int num = 0;
		for (int j = 0; j < 3; j++) {
			i--;
			if (i == -1) { break; }
			if (str[i] == '1') num += pow(2, j);
		}
		if (i == -1 && num == 0) break;
		s += to_string(num);
	}
	reverse(s.begin(), s.end()); //문자열 뒤집기

	if (s.size() == 0) s = "0";
	cout << s << endl;
}
