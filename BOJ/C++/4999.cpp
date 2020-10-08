#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string str1;
	string str2;
	cin >> str1 >> str2;

	if (str1.size() >= str2.size()) {
		cout << "go\n";
	}
	else {
		cout << "no\n";
	}
}
