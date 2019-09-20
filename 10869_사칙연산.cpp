//사칙 연산

#include <iostream>
using namespace std;

int A = 0, B = 0;
int main() {
	cin >> A >> B;

	if (1<= A && B <= 10000) {
		cout << A+B << "\n"<< A-B << "\n" << A * B << "\n" << A/B << "\n" << A%B << endl;
	}
}
