#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string a = "";
	char op = 0;
	string b = "";
	cin >> a >> op >> b;

	if (op == '+') {
		
		if (a.size() > b.size()) {
			a[a.size() - b.size()]++;
			cout << a << endl;
		}
		else {
			b[b.size() - a.size()]++;
			cout << b << endl;
		}

	}
	else if(op == '*') {
		cout << a;
		for (int i = 1; i < b.size(); i++) {
			cout << b[i];
		}
		cout << endl;
	}

}
