#include <iostream>
using namespace std;

int main() {	

	int N = 0;
	cin >> N;

	char a = 0;
	a = cin.get();

	int total = 0;

	for (int i =0; i < N; i++) {
		a = cin.get();
		total = total + static_cast<int>(a) - 48;	
	}
		
		cout << total << "\n";

}
