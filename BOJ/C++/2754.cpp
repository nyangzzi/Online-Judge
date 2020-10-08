#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	if (str[0] == 'A') {
		if (str[1] == '+') {
			cout << "4.3" << endl;
		}
		else if (str[1] == '0') {
			cout << "4.0" << endl;
		}
		else {
			cout << "3.7" << endl;
		}
	}
	else if (str[0] == 'B') {
		if (str[1] == '+') {
			cout << "3.3" << endl;
		}
		else if (str[1] == '0') {
			cout << "3.0" << endl;
		}
		else {
			cout << "2.7" << endl;
		}
	}
	else if (str[0] == 'C') {
		if (str[1] == '+') {
			cout << "2.3" << endl;
		}
		else if (str[1] == '0') {
			cout << "2.0" << endl;
		}
		else {
			cout << "1.7" << endl;
		}
	}
	else if (str[0] == 'D') {
		if (str[1] == '+') {
			cout << "1.3" << endl;
		}
		else if (str[1] == '0') {
			cout << "1.0" << endl;
		}
		else {
			cout << "0.7" << endl;
		}
	}
	else {
		cout << "0.0" << endl;
	}

}
