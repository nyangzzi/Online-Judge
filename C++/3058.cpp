#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int test = 0; 
	cin >> test;

	while (test--) {
		int min = 101;
		int sum = 0;

		for (int i = 0; i < 7; i++) {
			int n = 0; 
			cin >> n;

			if (n % 2 == 0) {
				sum += n;
				if (n < min) {
					min = n;
				}
			}
		}

		cout << sum << " " << min << "\n";
	}

}
