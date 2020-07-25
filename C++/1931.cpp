#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<pair<int, int>> classes;

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int start, end;
		cin >> start >> end;
		classes.push_back(make_pair(end,start));
	}

	sort(classes.begin(), classes.end());

	int cnt = 1;
	int time = classes[0].first;

	for (int i = 1; i < n; i++) {
		if (time <= classes[i].second) {
			time = classes[i].first;
			cnt++;
		}
	}
	cout << cnt << endl;
}
