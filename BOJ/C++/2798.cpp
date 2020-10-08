//배열 하나를 이용하여 풀이

#include <iostream>
using namespace std;

int main() {

	int arr1[100] = {};

	int n = 0, m = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}

	int t = 0;
	for (int i = 0; i < n - 2; i++)
		for (int j = i + 1; j < n - 1; j++)
			for (int k = j + 1; k < n; k++)

				if (arr1[i] + arr1[j] + arr1[k] <= m && m - (arr1[i] + arr1[j] + arr1[k]) < m - t)
					t = arr1[i] + arr1[j] + arr1[k];

	if (t == 0) return 0;
	cout << t << endl;
}
