#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test = 0;
	cin >> test;

	for (int t = 1; t <= test; t++) {
		cout << "Class " << t << endl;

		int n = 0;
		cin >> n;

		vector<int> v;
		for (int i = 0; i < n; i++) {
			int a = 0;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());

		cout << "Max " << v[n - 1] << ", ";
		cout << "Min " << v[0] << ", ";
		
		int max = 0;
		for (int i = 1; i < n; i++) {
			if (abs(v[i] - v[i - 1]) > max) { max = abs(v[i] - v[i - 1]); }
		}

		cout << "Largest gap " << max << endl;
	}

}
