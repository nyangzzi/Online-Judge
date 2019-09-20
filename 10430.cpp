#include <iostream>
using namespace std;

int A, B, C = 0;

int main() {

	cin >> A >> B >> C;

	if (2 <= A && A <= 10000 && 2 <= B && B <= 10000 && 2 <= C && C <= 10000) {
		cout << (A + B) % C << "\n";
		cout << (A%C + B % C) % C << "\n";
		cout << (A*B) % C << "\n";
		cout << (A%C * B%C) % C << "\n";
	}
}
