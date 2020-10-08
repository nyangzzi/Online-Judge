#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long n = 0;

	cin >> n;

	n %= 8;

	switch (n)
	{
	case 1:
		cout << 1 << endl; break;
	case 2:
	case 0:
		cout << 2 << endl; break;
	case 3:
	case 7:
		cout << 3 << endl; break;
	case 4:
	case 6:
		cout << 4 << endl; break;
	case 5:
		cout << 5 << endl; break;
	}

}
