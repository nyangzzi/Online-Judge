#include <iostream>
using namespace std;

int main() {

	while (1) {
		int boy = 0, girl = 0;
		cin >> boy >> girl;

		if (boy == 0 && girl == 0) {
			break;
		}

		cout << boy + girl << endl;
	}

}
