#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct univ {
	string s = "";
	int l = 0;
};

bool cmp(univ &x, univ &y) {
	return x.l < y.l;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 0;
	cin >> t;

	while (t--) {
		int n = 0;
		cin >> n;

		vector<univ> v;
		for (int i = 0; i < n; i++) {
			string s = "";
			int l = 0;
			cin >> s >> l;
			univ u;
			u.l = l;
			u.s = s;
			v.push_back(u);
		}

		sort(v.begin(), v.end(), cmp);

		cout << v[v.size() - 1].s << endl;


	}

}
