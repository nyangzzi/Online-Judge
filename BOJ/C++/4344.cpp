#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main() {

	int C = 0;
	cin >> C;

	for (int i = 0; i < C; i++) {

		int N = 0;
		cin >> N;
		
		int sum = 0;
		array<int, 1000> arr = {};

		for(int j = 0; j < N; j++) {
			cin >> arr[j];
			sum = sum + arr[j];
		}

		int avg = sum / N;
		int cnt = 0;

		for (int j = 0; j < N; j++) {

			if (arr[j] > avg) {
				cnt++;
			}
		}
		cout << setprecision(3) << fixed;
		cout << (static_cast<double>(cnt) / N)*100 << "%\n";
	}	

}
