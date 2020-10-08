#include <iostream>
#include <algorithm>
using namespace std;

int arr[11] = {};
int oper[4] = {};
char sum[10] = {};

int fac(int n) {
	int cnt = 1;

	for (int i = n; i > 0; i--) {
		cnt *= i;
	}
	return cnt;
}


int main() {

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int t = 0;
	for (int i = 0; i < 4; i++) {
		cin >> oper[i];
		while (oper[i] != 0) {
			if (i == 0) { sum[t] = '+'; oper[i]--; }
			else if (i == 1) { sum[t] = '-'; oper[i]--; }
			else if (i == 2) { sum[t] = '*'; oper[i]--; }
			else if (i == 3) { sum[t] = '/'; oper[i]--; }
			t++;
		}
	}

	int max = -1000000000;
	int min = 1000000000;

	int a = fac(n-1);

	for (int i = 0; i < a; i++) {
		int k = arr[0];

		for (int j = 0; j < n-1; j++) {
			if (sum[j] == '+') k += arr[j + 1];
			else if(sum[j] == '-') k -= arr[j + 1];
			else if (sum[j] == '*') k *= arr[j + 1];
			else if (sum[j] == '/') k /= arr[j + 1];
		}

		if(k < min) min = k;
		if(k > max) max = k;

		next_permutation(sum, sum + n - 1);

	}

	cout << max << " " << min << endl;
}
