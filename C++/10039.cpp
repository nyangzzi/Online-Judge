#include <iostream>
#include <array>
using namespace std;

int main() {
	
	int total = 0;

	array<int, 5> arr = {};
	int cnt = 0;

	while (cnt < 5) {
		cin >> arr[cnt];

		if (arr[cnt] < 40) {
			arr[cnt] = 40;
		}

		cnt++;
	}


	for (int i = 0; i < 5; i++) {
		total = total + arr[i];
	}

	cout << total / 5 << "\n";

}
