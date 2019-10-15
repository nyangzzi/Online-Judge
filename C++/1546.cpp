#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {

	int cnt = 1;
	int M = 0;
	double in = 0;
	int N = 0;
	double sum = 0;

	cin >> N;

	array<double, 1000> arr = {};

		while (cnt <= N) {
			cin >> in;

			if (0 <= in && in <= 100) {
				arr[cnt] = in;

				if (in > M) {
					M = in;
				}
			}
			cnt++;
		}

		for (int i = 1; i <= N; i++) {
				arr[i] = (arr[i] / M) * 100;
				sum = sum + arr[i];
		}

		cout << setprecision(2) << fixed;
		cout << sum / N << "\n";

}
