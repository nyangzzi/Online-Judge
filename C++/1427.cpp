#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		int max = i;
		for (int j = i; j < str.size(); j++) {
			if (str[j] > str[max]) max = j;
		}
		char tmp = str[max];
		str[max] = str[i];
		str[i] = tmp;
	}

	for (int i = 0; i < str.size(); i++) {
		cout << str[i];
	}

	cout << endl;
}
