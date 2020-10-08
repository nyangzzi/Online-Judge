#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0;
	int w = 0, h = 0;
	cin >> n >> w >> h;

	while (n--) {
		int size = 0;
		cin >> size;

		if (size <= w || size <= h) {
			cout << "DA" << endl;
		}
		else if (size * size <= w * w + h * h) {
			cout << "DA" << endl;
		}
		else {
			cout << "NE" << endl;
		}

	}
}
