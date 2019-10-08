#include <iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	if (1 <= N && N <= 9) {
		for (int i = 1; i <= 9; i++) {
			cout << N << " * "<< i << " = " << N*i <<"\n";
		}
	}
}
