#include <iostream>
using namespace std;

int main() {
	
	int add = 0, dec = 0;
	cin >> add >> dec;

	add = add - dec;

	if (add < 0) cout << -1 << endl; //차가 합보다 크면 -1을 출력한다
	else {
		if (add % 2 == 0) cout << add / 2 + dec << " " << add / 2 << endl;
		else cout << -1 << endl;
	}
 }
