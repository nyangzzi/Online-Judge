#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int sum = 0;
	int min = 100;
	for (int i = 0; i < 10; i++) {
		int n = 0;
		cin >> n;
		
		if (sum + n >= 100) {
			if (min >= (sum + n) - 100) {
				sum += n;
				min = sum - 100;
			}
			else {
				break;
			}
		}
		else {
			if (min >= 100 - (sum + n)) {
				sum += n;
				min = 100 - sum;
			}
			else {
				break;
			}
		}
	}

	cout << sum << endl;
}
