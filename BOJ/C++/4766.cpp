#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<double> v;

	while (1) {
		double now = 0;
		cin >> now;
		v.push_back(now);
		if (now == 999) break;
		
		if (v.size() != 1) {
			cout << fixed;
			cout.precision(2);
			cout << v[v.size() - 1] - v[v.size() - 2] << endl;
		}
	}
}
