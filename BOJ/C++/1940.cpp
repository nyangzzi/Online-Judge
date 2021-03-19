#include <iostream>
#include <vector>
using namespace std;

int main(){

	int n = 0, m = 0;
	cin >> n >> m;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		int num = 0;
		cin >> num;
		v.push_back(num);
	}

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i] + v[j] == m) cnt++;
		}
	}

	cout << cnt << endl;
}
