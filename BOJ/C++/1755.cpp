#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct number {
	int in = 0;
	string num = "";
};

bool cmp(number &x, number &y) {
	if (x.num < y.num) return true;

	return false;
}

string name(int n) {
	switch (n) {
	case 0: return "zero";
	case 1: return "one";
	case 2: return "two";
	case 3: return "three";
	case 4: return "four";
	case 5: return "five";
	case 6: return "six";
	case 7: return "seven";
	case 8: return "eight";
	case 9: return "nine";
	}
}

int main() {

	int m = 0, n = 0;
	cin >> m >> n;

	vector<number> v;

	for (int i = m; i <= n; i++) {
		number nn;
		nn.in = i;
		
		int one = i / 10;
		int two = i % 10;

		if (one != 0) {
			nn.num = name(one) + " ";
		}

		nn.num += name(two);
		v.push_back(nn);
	}

	sort(v.begin(), v.end(), cmp);

	int j = 0;
	for (int i = 0; i < v.size(); i++) {
		if (j == 10) { cout << endl; j = 0; }
		cout << v[i].in << " ";
		j++;
	}

}
