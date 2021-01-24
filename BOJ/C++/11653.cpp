#include <iostream>
using namespace std;

int main() {
	
	int n = 0;
	cin >> n;

	int i = 2;
	while(i <= n) {
		if (n%i == 0) {
			cout << i << "\n";
			n /= i;
		}
		else i++;
	}

	system("pause");
}
