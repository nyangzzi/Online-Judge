#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0;	//파일의 갯수
	cin >> n;

	string str[50];

	for (int i = 0; i < n; i++) cin >> str[i];

	if (n == 1) {
		for (int i = 0; i < str[0].size(); i++) {
			cout << str[0][i];
		}
		return 0;
	}

	for (int i = 0; i < str[0].size(); i++) {
		for (int j = 0; j < n - 1; j++) {
			if (str[j][i] != str[j+1][i]) {
				cout << "?";
				break;
			}
			if (j == n - 2) cout << str[j][i];
		}
		

	}
	cout << endl;
}
