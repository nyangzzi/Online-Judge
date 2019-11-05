#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {	
	string N;
	cin >> N;

	array<int, 10> arr = {};
	string a;

	for (int i = 0; i < N.size(); i++) {		
		a = N.substr(i, 1);
		
		if (a == "0") {
			arr[0]++;
		}
		else if (a == "1") {
			arr[1]++;
		}
		else if (a == "2") {
			arr[2]++;
		}
		else if (a == "3") {
			arr[3]++;
		}
		else if (a == "4") {
			arr[4]++;
		}
		else if (a == "5") {
			arr[5]++;
		}
		else if (a == "6") {
			arr[6]++;
		}
		else if (a == "7") {
			arr[7]++;
		}
		else if (a == "8") {
			arr[8]++;
		}
		else if (a == "9") {
			arr[9]++;
		}
	}

	if ((arr[6] + arr[9]) % 2 == 1) {
		arr[6]++;
	}
	arr[6] = (arr[6] + arr[9]) / 2;
	arr[9] = 0;

	int max = 0;
	for (size_t j = 0; j < 10; j++) {
		if (max < arr[j]) {
			max = arr[j];
		}
	}

	cout << max << "\n";

}
