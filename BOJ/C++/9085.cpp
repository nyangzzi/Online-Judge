#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int test = 0;
	cin >> test;

	while (test--) {
		int n = 0;
		cin >> n;
		int sum = 0;
		while (n--) {
			int num = 0;
			cin >> num;
			sum += num;
		}
		cout << sum << endl;
	}
}
