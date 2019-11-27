#include <iostream>
using namespace std;

int main() {
	
	int input = 0;

	cin >> input;

	if (input % 4 == 0) {
		if (input % 400 == 0) cout << "1" << endl;
		else if (input % 100 == 0) cout << "0" << endl;
		else cout << "1" << endl;
	}
	else cout << "0" << endl;
}
