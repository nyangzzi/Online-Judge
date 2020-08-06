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
	for (int i = 0; i < 8; i++) {
		int max = i;
		for (int j = i; j < 8; j++) {
			if (score[max] < score[j]) {
				max = j;
			}
		}
		num[i] = max + 1;
		int tmp = score[max];
		score[max] = score[i];
		score[i] = tmp;
		if (i < 5) {
			sum += score[i];
		}
	}

	cout << sum << endl;

	sort(num, num + 5);
	for (int i = 0; i < 5; i++) {
		cout << num[i] << " ";
	}

	cout << endl;
	system("pause");
}
