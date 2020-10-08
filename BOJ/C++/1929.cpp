#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	bool arr[1000000] = {};	//0이면 소수

	int m = 0, n = 0;
	cin >> m >> n;

	for (int i = 2; i <= n; i++) {
		if (arr[i]) {
			continue;
		}
		else {
			if(i >= m) cout << i << "\n";
      
			int j = 2;
			while (j * i <= n) {
				arr[j*i] = 1;
				j++;
			}
		}
	}
}
