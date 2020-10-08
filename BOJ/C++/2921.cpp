#include <iostream>
using namespace std;

int main() {

	int n = 0;
	cin >> n;

	int num = 0;
	int set = 0;
	for (int i = 0; i <= n; i++) {
		num += i;	
		set += (i*(i+1))+num;
	}

	cout << set << endl;
	
}
