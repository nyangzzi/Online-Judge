#include <iostream>
using namespace std;

int main() {

	int input = 0;
	cin >> input;

	int i = 1;
	
	while (1) {
		
		int s = i;

		for (int n = i; n > 0; n=n/10) {

			s = s + (n % 10);
		}

		if (s == input) { cout << i << endl; break; }
		else if (i > input) { cout << "0" << endl; break; }

		i++;
	}
}
