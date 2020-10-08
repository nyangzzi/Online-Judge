#include <iostream>
using namespace std;

int main() {

	long long n = 0;
	cin >> n;

	long long sum = 0;
	
	for (int i = 1; i < n; i++) {
		sum += (n*i + i);
	}

	cout << sum << endl;
}
