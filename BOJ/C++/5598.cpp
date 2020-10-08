#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] <= 'C') {
			str[i] += 23;
		}
		else {
			str[i] -= 3;
		}
	}

	cout << str << endl;
}
