#include <iostream>
using namespace std;

int main() {
	int arr[42] = {};
	int input = 0;
	for (int i = 0; i < 10; i++) {
		cin >> input;
		arr[input % 42]++ ;
	}

	int count = 0;
	for (int i = 0; i < 42; i++) {	
		if (arr[i] != 0) count++;
	}

	cout << count << endl;
}
