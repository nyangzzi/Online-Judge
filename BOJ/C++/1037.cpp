#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v;
	int n = 0;
	cin >> n;

	while (n--) {
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	
	sort(v.begin(), v.end());

	cout << v[0] * v[v.size() - 1] << endl;

}
