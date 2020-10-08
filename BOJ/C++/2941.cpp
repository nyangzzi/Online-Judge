#include <iostream>
#include <string>
using namespace std;

int main() {	
	string str;
	cin >> str;

	string a, b;
	int s = str.size();

	for (int i = 0; i < str.size(); i++) {
		a = str.substr(i, 1);
		b= str.substr(i+1, 1);
		if (a == "c" && (b == "=" || b == "-")) {
			s--;
		}
		else if (a == "d" && b == "z" && str.substr(i + 2, 1) == "=") {
			s--;
		}
		else if (a == "d" && b == "-") {
			s--;
		}
		else if (a == "l" && b == "j") {
			s--;
		}
		else if (a == "n" && b == "j") {
			s--;
		}
		else if (a == "s" && b == "=") {
			s--;
		}
		else if (a == "z" && b == "=") {
			s--;
		}
	}

	cout << s << "\n";
}
