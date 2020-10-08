#include <iostream>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[9] = {};
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	
	int one = 0, two = 0;

	for (int i = 0; i < 9; i++) {
		int s = sum;
		s -= arr[i];
		for (int j = i; j < 9; j++) {
			s -= arr[j];
			if (s == 100) {
				one = i;
				two = j;
				break;
			}
			else s += arr[j];
		}
		if (one != 0) break;
	}

	for (int i = 0; i < 9; i++) {
		if (i == one || i == two) continue;
		cout << arr[i] << endl;
	}
}
