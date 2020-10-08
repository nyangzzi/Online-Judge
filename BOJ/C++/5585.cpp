#include <iostream>
using namespace std;

int main() {
	
	int n = 0;
	cin >> n;

	n = 1000 - n;

	int num = 0;

	num += (n / 500);
	n %= 500;
	num += (n / 100);
	n %= 100;
	num += (n / 50);
	n %= 50;
	num += (n / 10);
	n %= 10;
	num += (n / 5);
	n %= 5;
	num += (n / 1);
	n %= 1;

	cout << num << endl;
	
}
