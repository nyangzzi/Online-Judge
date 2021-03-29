#include <iostream>
#include <vector>
using namespace std;

int main() {

	int t = 0;
	cin >> t;

	vector<int> v;
	while (t > 0) {
		v.push_back(t % 9);
		t /= 9;
	}

	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i];
	}

	cout << endl;
}
