#include <iostream>
#include <string>
using namespace std;

int main() {

	string str = "";
	cin >> str;

	bool b = 0;
	int n = 0, m = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ':') b = 1;
		else if (!b) {
			n *= 10;
			n += str[i] - '0';
		}
		else {
			m *= 10;
			m += str[i] - '0';
		}
	}
    
	if (n > m) {
		int i = 2;
		while (i <= m) {
			if (n%i == 0 && m % i == 0) {
				n /= i;
				m /= i;
			}
			else {
				i++;
			}
		}
	}
	else {
		int i = 2;
		while (i <= n) {
			if (n%i == 0 && m % i == 0) {
				n /= i;
				m /= i;
			}
			else {
				i++;
			}
		}
	}

	cout << n << ":" << m << endl;
	
}
