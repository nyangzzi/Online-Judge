//수정
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, m = 0;
	cin >> n >> m;

	vector<int> v;
	v.push_back(-1);
	while (n--) {
		int num = 0;
		cin >> num;
		v.push_back(num);
	}

	while (m--) {
		int a = 0, b = 0;
		cin >> a >> b;
		cout << *min_element(v.begin()+a, v.begin() + b+1) << " ";
		cout << *max_element(v.begin() + a, v.begin() + b+1) << "\n";
	}

	system("pause");
	
}
