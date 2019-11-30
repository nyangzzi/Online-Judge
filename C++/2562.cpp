#include <iostream>
using namespace std;

int main() {
	int arr[9] = {};

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	int a = 0, max = arr[0];
	for (int i = 0; i < 9; i++) {

		if (max < arr[i]) { 
			max = arr[i]; 
			a = i;
		}
	}

	cout << max << endl;
	cout << a+1 << endl;
}
