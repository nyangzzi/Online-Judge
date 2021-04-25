#include <iostream>
#include <string>
using namespace std;

int main() {

	string str = "";

	while (true) {
		getline(cin, str);

		if (str == "EOI") break;
		for (int i = 0; i < str.size(); i++){
			str[i] = toupper(str[i]);
		}

		if (str.find("NEMO") != string::npos) cout << "Found" << endl;
		else cout << "Missing" << endl;
	}
	
}
