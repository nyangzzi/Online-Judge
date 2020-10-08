#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	bool student[31] = {};

	for (int i = 1; i <= 28; i++) {
		int s = 0;
		cin >> s;
		student[s] = 1;
	}

	for (int i = 1; i < 31; i++) {
		if (!student[i]) cout << i << "\n";
	}
}
