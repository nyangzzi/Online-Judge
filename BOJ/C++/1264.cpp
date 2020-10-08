#include <iostream>
#include <string>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while (1) {
		string str;
		getline(cin, str);

		if (str == "#") break;

		int n = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u') {
				n++;
			}
		}
	
		cout << n << endl;
	}
}
