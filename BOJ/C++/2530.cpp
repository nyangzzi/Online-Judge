#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int h = 0, m = 0, s = 0, t = 0;
	cin >> h >> m >> s >> t;

	s += t;

	while (s >= 60) {
		m++;
		s -= 60;
	}

	while (m >= 60) {
		h++;
		m -= 60;
	}

	while (h >= 24) {
		h -= 24;
	}

	cout << h << " " << m << " " << s << endl;

}
