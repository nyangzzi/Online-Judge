#include <iostream>
#include <array>
using namespace std;

array<int, 10001> arr = {};

void f(int sum) {

	while (sum < 10000) {
		if (sum < 10) {
			sum = sum + sum;
				arr[sum]++;
		}
		else if (10 <= sum && sum < 100) {
			sum = sum + (sum / 10) + (sum % 10);
				arr[sum]++;
		}
		else if (100 <= sum && sum < 1000) {
			sum = sum + (sum / 100) + ((sum - (sum / 100) * 100) / 10) + (sum % 10);
				arr[sum]++;
		}
		else {
			sum = sum + (sum / 1000) + ((sum - (sum / 1000) * 1000) / 100)
				+ ((sum - (sum / 100) * 100) / 10) + (sum % 10);
			if (sum <= 10000) {
				arr[sum]++;
			}
		}
	}

}

int main() {

	for (int j = 1; j < 10001; j++) {
		f(j);
	}
	
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
		}
	}
	
}
