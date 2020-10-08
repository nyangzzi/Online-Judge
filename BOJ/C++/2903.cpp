#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n = 0;
	cin >> n;

	int t = 2;
	for (int i = 1; i <= n; i++) {
		t += pow(2,i-1);
	}

	cout << t*t << endl;
}
