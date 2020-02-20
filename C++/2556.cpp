#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	for (int i = N; i > 0; i--) {
		for (int j = N; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
}
