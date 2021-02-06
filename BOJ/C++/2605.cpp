#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	vector<int> v;

	for (int i = 1; i <= n; i++) {
		int s = 0;
		cin >> s;
		v.insert(v.begin() + (v.size() - s), i);
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	
}
