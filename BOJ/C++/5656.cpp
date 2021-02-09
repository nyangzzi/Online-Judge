#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int cnt = 1;
	while (1) {

		int a = 0, b = 0;
		string op = "";

		cin >> a >> op >> b;
	
		if (op == "E") break;

		cout << "Case " << cnt << ": ";

		if (op == ">" && a > b) cout << "true" << endl;
		else if(op == ">=" && a>= b) cout << "true" << endl;
		else if(op == "<" && a < b) cout << "true" << endl;
		else if(op == "<=" && a <= b) cout << "true" << endl;
		else if(op== "==" && a == b) cout << "true" << endl;
		else if(op == "!=" && a != b) cout << "true" << endl;
		else cout << "false" << endl;
	}
}
