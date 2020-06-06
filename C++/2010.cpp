#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n = 0;
	cin >> n;

	int computer = 0;
	for (int i = 0; i < n; i++) {
		int plug = 0;
		cin >> plug;
		computer += (plug - 1);
	}

	cout << computer+1 << "\n";
}
