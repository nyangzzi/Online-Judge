#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {

	string str;
	cin >> str;

	array<int, 26> arr = {};

	char alpha;
	int c;

	for (int i = 0; i < str.size(); i++) {
		alpha = str[i];
		c = static_cast<int>(alpha);

		if (65 <= c && c <= 90) {
			c = c - 65;
		}
		else if (97 <= c && c <= 122) {
			c = c - 97;
		}		
		
		for (int j = 0; j < 26; j++) {
			if (c == j) {
				arr[j]++;
			}
		}
	
	}

	int max = 0;
	int M = 0;
	for (size_t j = 0; j < 26; j++) {
		
		if (max < arr[j]) {
			max = arr[j];
			M = j;
		}
	}

	for (size_t j = 0; j < 26; j++) {
		if (M != j) {
			if (max == arr[j]) {
				M = -2;
			}
		}	
	}

	cout << static_cast<char>(M + 65) << "\n";

}
