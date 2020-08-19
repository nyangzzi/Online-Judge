#include <iostream>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string str;
	getline(cin,str);

	int money = 5000;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			continue;
		}
		else if(str[i] == '1'){
			money -= 500;
		}
		else if (str[i] == '2') {
			money -= 800;
		}
		else if (str[i] == '3') {
			money -= 1000;
		}
	}
	cout << money << endl;
}
