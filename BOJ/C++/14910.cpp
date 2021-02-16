#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;

	int n = 0;
	bool b = 0;

	while (cin >> n) {
		
		//if (cin.eof() == true) break;

		v.push_back(n);

		if (v.size() == 1) continue;

		if (v[v.size() - 2] > v[v.size() - 1]) b = 1;

	}

	if (!b) cout << "Good" << endl;
	else cout << "Bad" << endl;

}
