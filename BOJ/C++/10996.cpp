#include <iostream>
using namespace std;

int main() {


	int n = 0;
	cin >> n;

	int a = 0, b = 0;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) a++;
		else b++;
	}
	
	if (n == 1) { 
		cout << "*" << endl;
		return 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < a; j++) {
			cout << "*" << " ";
		}
		cout << endl;
		for (int k = 0; k < b; k++) {
			cout<< " " << "*";
		}
		cout << endl;
	}

//	system("pause");
}
