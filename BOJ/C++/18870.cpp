#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	vector<int> vSort;

	int n = 0;
	cin >> n;

	while (n--) {
		int t = 0;
		cin >> t;
		v.push_back(t);
		vSort.push_back(t);
	}	
	
	sort(vSort.begin(), vSort.end());
	vSort.erase(unique(vSort.begin(), vSort.end()),vSort.end());

	for (int i = 0; i < v.size(); i++) {
		cout << lower_bound(vSort.begin(), vSort.end(), v[i]) - vSort.begin() << " ";
	}

}
