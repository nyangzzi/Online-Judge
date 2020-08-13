#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n = 0;
	cin >> n;

	if (n % 2 == 1) {
		cout << "SK\n";
	}
	else {
		cout << "CY\n";
	}
}
