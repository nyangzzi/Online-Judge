#include <iostream>
using namespace std;

int main(){

	int a = 0, b= 0;
	cin >> a >> b;

	int sum = 0;
	int now = 1;
	int n = 0;
	
	for (int i = 1; i <= b; i++) {
		n++;
		if (i >= a) {
			sum += now;
		}
		if (n == now) {
			n = 0;
			now++;
		}
	}
	cout << sum << endl;
}
