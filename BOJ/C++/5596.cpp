#include <iostream>
using namespace std;

int main() {

	int min = 0;
	for (int i = 0; i < 4; i++) {
		int n = 0;
		cin >> n;
		min += n;
	}

	int man = 0;
	for (int i = 0; i < 4; i++) {
		int n = 0;
		cin >> n;
		man += n;
	}

	if (man > min) {
		cout << man<<endl;
	}
	else {
		cout << min << endl;
	}

}
