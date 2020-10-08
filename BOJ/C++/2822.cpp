#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int score[8] = {};
	int num[8] = {};

	for (int i = 0; i < 8; i++) {
		cin >> score[i];
	}
	
	int sum = 0;
	int t = 0;
	for (int i = 0; i < 8; i++) {
		int max = 0;
		for (int j = 0; j < 8; j++) {
			if (score[max] < score[j]) {
				max = j;
			}
		}
		num[i] = max + 1;
		if (t < 5) {
			sum += score[max];
		}
		t++;
		score[max] = -1;
	}

	cout << sum << endl;

	sort(num, num + 5);
	for (int i = 0; i < 5; i++) {
		cout << num[i] << " ";
	}

	cout << endl;

}
