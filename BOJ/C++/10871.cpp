#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {

	int cnt = 1;
	int N = 0;
	int X = 0;
	cin >> N >> X;

	array<int, 10000> arr = {};
	
	while (cnt <= N) {
		if (1 <= X && X <= 10000) {
			cin >> arr[cnt];
		}
		cnt++;
	}

	for (int i = 1; i <= N; i++) {
		if (arr[i] < X) {
			cout << arr[i] << " ";
		}
	}
	cout << "\n";

}
