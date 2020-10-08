#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	
	while(1) {
		int arr[3] = {};

		for (int i = 0; i < 3; i++) {
			cin >> arr[i];
		}

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) break;

		sort(begin(arr), end(arr));

		if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2))
			cout << "right" << endl;
		else cout << "wrong" << endl;
	}
}
