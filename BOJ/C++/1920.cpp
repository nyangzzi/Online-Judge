#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	cin >> n;
	vector<int> a;
	int max = 0;
	while (n--) {
		int aa = 0;
		cin >> aa;
		a.push_back(aa);
		if (aa > max) max = aa;
	}

	int m = 0;
	cin >> m;
	vector<int> b;
	while (m--) {
		int bb = 0;
		cin >> bb;
		b.push_back(bb);
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < b.size(); i++) {
		if (b[i] > max) cout << "0\n";
		else if (b[i] == a[lower_bound(a.begin(), a.end(), b[i]) - a.begin()]) cout << "1\n";
		else cout << "0\n";
	}

}
