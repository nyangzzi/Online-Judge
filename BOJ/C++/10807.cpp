#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	vector<int> vec;

	while (n--) {
		int nn = 0;
		cin >> nn;
		vec.push_back(nn);
	}

	int v = 0;
	cin >> v;

	int cnt = 0;
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == v) cnt++;
	}

	cout << cnt << endl;
	system("pause");
}
