#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	char arr[100][100] = {};
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	int k = 0;
	cin >> k;

	if (k == 1) {	//그대로 출력
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
	else if (k == 2) {	//좌우반전
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j >= 0; j--) {
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
	else if (k == 3) {	//상하 반전
		for (int i = n - 1; i >= 0; i--) {
			for (int j = 0; j < n; j++) {
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
}
