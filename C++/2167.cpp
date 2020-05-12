#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[301][301] = {};
	int n = 0, m = 0;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}

	int k = 0; 
	cin >> k;
	
	for (int t = 0; t < k; t++) {
		int total = 0;
		int i = 0, j = 0, x = 0, y = 0;
		cin >> i >> j >> x >> y;
		for (int a = i; a <= x; a++) {
			for (int b = j; b <= y; b++) {
				total += arr[a][b];
			}
		}
		cout << total << "\n";
	}
}
