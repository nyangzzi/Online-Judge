#include <iostream>
using namespace std;

int main() {

	int size = 0;
	cin >> size;
	int* arr = new int[size];
	
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	int y = 0;
	int m = 0;

	for (int i = 0; i < size; i++) {
		y = y + (arr[i] / 30 + 1) * 10;
		m = m + (arr[i] / 60 + 1) * 15;
	}

	if (y == m)	cout << "Y M " << y << endl;
	else if (y < m) cout << "Y " << y << endl;
	else cout << "M " << m << endl;
	
	delete[] arr;
	arr = NULL;
}
