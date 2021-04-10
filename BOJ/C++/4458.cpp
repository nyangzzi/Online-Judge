#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string str = "";
	int n = 0;
	cin >> n;
	
	while (n--) {
		getline(cin, str);
		if (str == "") { n++; continue; }
		if (str[0] >= 'a' && str[0] <= 'z') str[0] = str[0] - 'a' + 'A';
		cout << str << endl;
	}
}
