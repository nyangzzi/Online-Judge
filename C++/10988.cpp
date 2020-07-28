#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	int s = 0, e = str.size() - 1;

	bool f = 1;
	while (s < e) {
		if (str[s] != str[e]) {
			f = 0;
			break;
		}
		else {
			s++; e--;
		}
	}
	
	cout << f << endl;

}
