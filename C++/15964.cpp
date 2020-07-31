#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long a = 0, b = 0;
	cin >> a >> b;

	cout << (a + b) * (a - b) << endl;
}
