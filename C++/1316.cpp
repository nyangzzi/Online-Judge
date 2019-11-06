#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {

	int N = 0;
	cin >> N;
	int cnt = 0;

	for (size_t k = 0; k < N; k++) {

		string str;
		cin >> str;

		array<int, 100> arr = {};

		int num = 0;

		for (int i = 0; i < str.size(); i++) {
			while (str[i] == str[i + 1]) {
				str.erase(i + 1, 1);
			}
		}

		for (int i = 0; i < str.size(); i++) {
			for (int j = 0; j < str.size(); j++) {
				if (i != j) {
					if (str[i] == str[j]) {
						num = 1;
					}
				}
			}
		}

		if (num == 0) {
			cnt++;
		}
	}

	cout << cnt << "\n";

}
