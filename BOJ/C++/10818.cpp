#include <iostream>
using namespace std;

int main() {
	int size = 0;
	cin >> size;
	int* arr = new int [size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	int min = arr[0], max = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}

	cout << min << " " << max << endl;

	delete[] arr;
	arr = NULL;
}
