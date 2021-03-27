#include <iostream>
using namespace std;

int main() {

	int test = 0;
	while (1){

		test++;

		int r = 0, w = 0, l = 0;
		cin >> r;
		if (r == 0) break;
		cin >> w >> l;

		cout << "Pizza " << test;

		if ((r+r)*(r+r) < (w*w)+(l*l)) cout << " does not fit on the table." << endl;
		else cout << " fits on the table." << endl;

	}
}
