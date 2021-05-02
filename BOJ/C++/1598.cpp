#include <iostream>
#include <cmath>
using namespace std;

struct N{
	int x;
	int y;
};

N xy(int m) {
	N n;
	
	if (m % 4 == 0)  n.x = m / 4;
	else n.x = m / 4 + 1;

	if (m % 4 == 0) n.y = 4;
	else n.y = m % 4;

	return n;
}

int main() {

	int a = 0, b = 0;
	cin >> a >> b;

	N A = xy(a);
	N B = xy(b);

	cout << abs(A.x-B.x) + abs(A.y - B.y) << endl;

}
