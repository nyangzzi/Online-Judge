#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	string str2 = "";
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '0') str2 += "000";
		else if (str[i] == '1') str2 += "001";
		else if (str[i] == '2') str2 += "010";
		else if (str[i] == '3') str2 += "011";
		else if (str[i] == '4') str2 += "100";
		else if (str[i] == '5') str2 += "101";
		else if (str[i] == '6') str2 += "110";
		else if (str[i] == '7') str2 += "111";
	}

	for (int i = 0; i < str2.size(); i++) {
		if (i == 0 && str2[i] == '0') {
			if (str2[i + 1] == '0') i++;
			continue;
		}
		else {
			cout << str2[i];
		}
	}
	
}
