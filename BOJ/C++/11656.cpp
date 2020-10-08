#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;

	string str[1001] = {};
	string cs = s;

	for (int i = 0; i < s.size(); i++) {
		str[i] = cs;
		cs.erase(0, 1);
	}
	
	sort(str, str + s.size());
	
	for (int i = 0; i < s.size(); i++) {
		cout << str[i] << "\n";
	}

}
