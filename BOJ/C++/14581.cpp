#include <iostream>
#include <string>
using namespace std;

int main(){

	string str = "";
	cin >> str;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) {
				cout << ":" << str << ":";
			}
			else {
				cout << ":fan:";
			}
		}
		cout << endl;
	}
}
