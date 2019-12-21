#include <iostream>
using namespace std;

int main() {

	int size = 0;
	cin >> size;
	unsigned long long* arr = new unsigned long long[size];
	
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	unsigned long long c = 0;
	cin >> c;

	unsigned long long count = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] == 0) continue;
		else if (arr[i] > c) 
			if (arr[i]%c)	count = count + (arr[i]/c) +1;
			else count = count + (arr[i] / c);
		else if (arr[i] <= c) count++;
	}

	cout << count*c << endl;

	delete[] arr;
	arr = NULL;
}
