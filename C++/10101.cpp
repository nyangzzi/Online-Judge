#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;

	if (a + b + c == 180) {
		if (a == 60 && b == 60 && c == 60) {
			cout << "Equilateral" << endl;
		}
		else if (a == b || b == c || a == c) {
			cout << "Isosceles" << endl;
		}
		else {
			cout << "Scalene" << endl;
		}
	}
	else {
		cout << "Error" << endl;
	}
	
}
