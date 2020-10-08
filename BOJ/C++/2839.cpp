#include <iostream>
using namespace std;

int N = 0;
int three, five = 0;

int main() {

	cin >> N;

	if (10 <= N && N <= 5000) {
		if (N % 10 == 0) {
			three = 0;
		}
		else if (N % 10 == 3 || N % 10 == 8) {
			three = 1;
		}
		else if (N % 10 == 1 || N % 10 == 6) {
			three = 2;
		}
		else if (N % 10 == 4 || N % 10 == 9) {
			three = 3;
		}
		else if (N % 10 == 2|| N % 10 == 7) {
			three = 4;
		}
		five = (N - 3 * three) / 5;
		cout << five + three << "\n";
	}

	if (3 <= N && N < 10) {
		if (N % 3 == 0) {
			cout << N / 3 << "\n";
		}
		else if (N % 5 == 0) {
			cout << N / 5 << "\n";
		}
        else if (N == 8) {
			three = 1;
			five = 1;
			cout << three + five << "\n";
		}
		else {
			cout << -1 << "\n";
		}
	}
}
