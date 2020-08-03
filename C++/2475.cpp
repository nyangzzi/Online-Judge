#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int six = 0;
	for (int i = 0; i < 5; i++) {
		int n = 0;
		cin >> n;
		six += (n*n);
	}

	cout << six % 10 << endl;
  
  }
