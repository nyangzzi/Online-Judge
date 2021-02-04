#include <iostream>
#include <string>
using namespace std;

int main() {

	string str = "";
	cin >> str;

	string cam = "CAMBRIDGE";

	for (int i = str.size()-1; i >=0; i--) {
		for (int j = 0; j < cam.size(); j++) {
			if (str[i] == cam[j]) {
				str.erase(i, 1);
				break;
			}
		}
	}

	cout << str << endl;

	system("pause");
}
