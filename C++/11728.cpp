#include <iostream>
using namespace std;

int a[1000000] = {};
int b[1000000] = {};

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0, m = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)	cin >> a[i];
	for (int i = 0; i < m; i++)	cin >> b[i];

	int cntA = 0, cntB = 0;

	while (cntA != n+1 && cntB != m+1) {
		if (cntA == n) {
			cout << b[cntB] << " ";
			cntB++;
			if (cntB == m) break;
		}
		else if (cntB == m) {
			cout << a[cntA] << " ";
			cntA++;
			if (cntA == n) break;
		}
		else {
			if (a[cntA] < b[cntB]) {
				cout << a[cntA] << " ";
				cntA++;
			}
			else {
				cout << b[cntB] << " ";
				cntB++;
			}
		}
	}
}
