#include <iostream>
using namespace std;

int main(){

	int n = 0;
	cin >> n;

	while (n--) {
		int n = 0, c = 0;
		cin >> n >> c;

		int cnt = n/c;
		if (n%c != 0)cnt++;

		cout << cnt << endl;

		
	}

}
