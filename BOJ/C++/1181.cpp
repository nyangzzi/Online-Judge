#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string x, string y) {
	if (x.size() == y.size()) return x < y;
	else return x.size() < y.size();
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> v;
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(), v.end(), cmp);
	v.erase(unique(v.begin(), v.end()),v.end());
	

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

}
