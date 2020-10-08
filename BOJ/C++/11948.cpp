#include <iostream>
using namespace std;

int main() {

	int sum = 0;
	
	int min = 101;
	for (int i = 0; i < 6; i++) {
		int n = 0;
		cin >> n;
		
		if (i == 0 || i == 4) {
			min = n;
		}
		else {
			if (min > n) {
				min = n;
			}
		}

		sum += n;

		if (i == 3 || i == 5) {
			sum -= min;
		}
	}

	cout << sum << endl;
	
}
