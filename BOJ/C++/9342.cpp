#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int test = 0;
	cin >> test;

	while (test--) {
		string str;
		cin >> str;

		bool b = 0;
		int now = 0;

		int a = 0, f = 0, c = 0;

		for (int i = 0; i < str.size(); i++) {
			if (i == 0) {
				if (str[i] > 'F') { b = 1; break; }
				else if (str[i] == 'A') {
					if (str[i + 1] != 'A') { now=2; a++; }
					else if(str[i + 1] == 'A') { now = 1; a++; }
					continue;
				}
				now++;
			}
			else if (i == str.size()-1) {
				if (str[i] > 'F') { b = 1; break; }
				else if (now == 3 && str[i] == 'C') { continue; }
				else if(!(a > 0 && f > 0 && c > 0)) { b = 1; break; }
			}
			else {
				if (now == 1 && str[i] == 'A') {
					if (str[i + 1] != 'A') { now++; a++; }
				}
				else if (now == 2 && str[i] == 'F') {
					if (str[i + 1] != 'F') { now++; f++; }
				}
				else if (now == 3 && str[i] == 'C') {
					if (str[i + 1] != 'C') { now++; c++; }
				}
				else {b = 1; break; }

			}
			
		}

		if(b == 1) cout << "Good" << endl;
		else cout << "Infected!" << endl;
	}

}
