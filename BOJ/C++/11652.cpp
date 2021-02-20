#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long n = 0;
	cin >> n;

	vector<long long> v;
	for (int i = 0; i < n; i++) {
		long long t = 0;
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());

	long long max = 0;
	long long maxCnt = 0;
	
	int cnt = 0;
	for (int i = 0; i < v.size(); i++) {
		cnt++;
		if (i == v.size() - 1 || v[i] != v[i+1]) {
			if (cnt > maxCnt) {
				maxCnt = cnt;
				max = v[i];
			}
			cnt = 0;
		}

	}

	cout << max << endl;
}
