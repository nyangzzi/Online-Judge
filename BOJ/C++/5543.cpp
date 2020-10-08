#include <iostream>
using namespace std;

int main() {

	int arr[5] = {};

	
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	int set = arr[0];
	for (int i = 0; i < 3; i++) {
		if (set > arr[i]) set = arr[i];
	}
	if (arr[3] < arr[4]) set += arr[3];
	else set += arr[4];

	cout << set - 50 << endl;
	
//	system("pause");
}
