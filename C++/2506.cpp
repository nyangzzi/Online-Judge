#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0;
	int score = 0;
	int num = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		bool c = 0;
		cin >> c;

		if (c) {
			num++;
			score += num;
		}
		else {
			num = 0;
		}
	}

	cout << score << endl;

}
