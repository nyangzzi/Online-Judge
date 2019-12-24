#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int c = 0, a = 0;
	if (str[0] == 'C' || str[0] == 'G' || str[0] == 'F') c++;
	else if (str[0] == 'E' || str[0] == 'A' || str[0] == 'D') a++;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '|') {
			if (str[i+1] == 'C' || str[i+1] == 'G' || str[i + 1] == 'F') c++;
			else if (str[i+1] == 'E' || str[i + 1] == 'A' || str[i + 1] == 'D') a++;
		}
	}
	
	if (c > a) cout << "C-major" << endl;
	else if (c < a) cout << "A-minor" << endl;
	else {
		if (str[str.size()-1] == 'C' || str[str.size() - 1] == 'G' || str[str.size() - 1] == 'F') cout << "C-major" << endl;
		else if (str[str.size() - 1] == 'E' || str[str.size() - 1] == 'A' || str[str.size() - 1] == 'D') cout << "A-minor" << endl;
		}
	}
