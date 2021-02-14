#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct N {
	int x = 0;
	int y = 0;
};

bool cmp(N& a, N& b) {
	if (a.y < b.y) return true;
	else if (a.y == b.y && a.x < b.x) return true;
	else return false;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	cin >> n;

	vector<N> nn;

	for (int i = 0; i < n; i++) {
		int x = 0, y = 0;
		cin >> x >> y;

		N nnn;
		nnn.x = x;
		nnn.y = y;

		nn.push_back(nnn);
	}

	sort(nn.begin(), nn.end(), cmp);

	for (int i = 0; i < nn.size(); i++) {
		cout << nn[i].x << " " << nn[i].y << "\n";
	}
}
