#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string str;
	cin >> str;

	int num = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ',') {
			num++;
		}
	}

	cout << num + 1 << endl;

}
