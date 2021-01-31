#include <iostream>
#include <string>
using namespace std;

int main() {
	
	while (1) {
		
		char c = 0;
		cin >> c;
		if (c == '#') break;

		string str = "";
		getline(cin, str);
		
		int cnt = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == c || (str[i]- 'A' + 'a') == c) cnt++;
		}

		cout << c << " " << cnt << endl;
		
	}
	
}
