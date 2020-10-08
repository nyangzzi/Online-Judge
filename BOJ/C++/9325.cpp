#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int test = 0;
	cin >> test;

	while (test--) {
		int car = 0;
		int option = 0;
		cin >> car >> option;
		int total = car;
		while (option--) {
			int num = 0;
			int price = 0;
			cin >> num >> price;
			total += num * price;
		}
		cout << total << "\n";
	}
	
}
