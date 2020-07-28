#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = -1;
	
	while (1) {
		cin >> n;
		if (n == 0) break;

		bool arr[123456 * 2] = {};	//0이면 소수

		int cnt = 0;

		for (int i = 2; i <= 2*n; i++) {
			if (arr[i]) {
				continue;
			}
			else {
				if(i > n) cnt++;
				int j = 2;
				while (j * i <= 2*n) {
					arr[j*i] = 1;
					j++;
				}
			}
		}
		cout << cnt << "\n";
	}

}
