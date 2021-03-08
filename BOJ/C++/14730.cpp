#include <iostream>
using namespace std;

int main(){

	int n = 0;
	cin >> n;

	int f = 0;
	while (n--) {
		int c = 0, k = 0;
		cin >> c >> k;

		f += c * k;
	}

	cout << f << endl;

}
