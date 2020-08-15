#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string str;
	cin >> str;

	if ((str[str.size()-1]-'0') % 2 == 1) {
		cout << "SK\n";
	}
	else {
		cout << "CY\n";
	}
}
