#include <iostream>
#include <vector>
using namespace std;

int main() {

	
	int n = 0, m = 0;
	cin >> n >> m;

	vector<int> v;

	for (int i = 0; i < m; i++) {
		int c = 0;
		cin >> c;
		v.push_back(c);
	}

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			if (i % v[j] == 0) {
				sum += i;
				break;
			}
		}
	}

	cout << sum << endl;

}
