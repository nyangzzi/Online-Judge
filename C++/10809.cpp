#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	cin >> S;

	for (size_t i = 97; i <= 122; i++) {
		char c = static_cast<char>(i);
		int n = 0;
		n = S.find(c);
		cout << n << " ";
	}

	cout << "\n";
}
