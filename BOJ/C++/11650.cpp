#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0;
	cin >> n;

	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++) {
		pair<int, int> p;
		int a = 0, b = 0;
		cin >> a >> b;
		p.first = a;
		p.second = b;
		v.push_back(p);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

}
