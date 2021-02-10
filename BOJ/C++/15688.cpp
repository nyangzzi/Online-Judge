#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
  ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n = 0;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		int a = 0;
		cin >> a;
		v.push_back(a);
	}
  
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}
