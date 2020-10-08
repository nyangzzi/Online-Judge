#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int day = 0; 
	cin >> day;

	int cnt = 0;	//위반하는 차
	for (int i = 0; i < 5; i++) {
		int car = 0;
		cin >> car;
		if (car % 10 == day % 10) cnt++;
	}

	cout << cnt << endl;
}
