#include <iostream>
using namespace std;

int main() {

	int b_y = 0, b_m = 0, b_d = 0;
	int n_y = 0, n_m = 0, n_d = 0;
	cin >> b_y >> b_m >> b_d;
	cin >> n_y >> n_m >> n_d;

	//만나이
	
	if ((n_m > b_m) || ((n_m == b_m) && (n_d >= b_d))) {	//생일이 지남
		cout << n_y - b_y << endl;
	}
	else {	//생일이 지나지 않음
		cout << n_y - b_y - 1 << endl;
	}
	//세는 나이
	cout << n_y - b_y + 1 << endl;
	//연 나이
	cout << n_y - b_y << endl;
	
}
