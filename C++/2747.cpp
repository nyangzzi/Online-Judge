//피보나치 수는 일반적인 재귀로 풀면 O(n^2) time 으로 시간 초과가 뜨기 때문에 주의한다

#include <iostream>
#include <array>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	array<int, 45> arr = {};

	for (int i = 0; i <= N; i++) {
		if (i == 0) {
			arr[0] = 0;
		}
		else if (i == 1) {
			arr[1] = 1;
		}
		else {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
	}

	cout << arr[N] << "\n";
}
