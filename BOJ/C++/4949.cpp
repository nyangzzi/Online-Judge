#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	
	
	while (1) {

		getline(cin, str);
		if (str == ".") break;

		bool r = 1;
		int arr[100] = {};
		int t = -1;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				t++;
				arr[t] = str[i];
			}
			else if (str[i] == ')') {
				if (t==-1) {
					r = 0;
					break;
				}
				else if (arr[t] == '(') {
					t--;
				}
				else {
					r = 0;
					break;
				}
			}
			else if (str[i] == ']') {
				if (t == -1) {
					r = 0;
					break;
				}
				else if (arr[t] == '[') {
					t--;
				}
				else {
					r = 0;
					break;
				}
			}
		}

		if (r == 0 || t>-1) cout << "no" << endl;
		else cout << "yes" << endl;
		
	}
}
