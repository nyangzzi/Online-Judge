#include <iostream>
using namespace std;

int main() {

	int set[6] = { 1,1,2,2,2,8 };

	for (int i = 0; i < 6; i++) {
		int t = 0;
		cin >> t;
		cout << set[i] - t << " ";
	}
	
}
