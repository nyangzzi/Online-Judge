#include <iostream>
using namespace std;

int main() {

		int size = 0;
		cin >> size;
		long long* p = new long long[size + 1];

		p[0] = 0;
		p[1] = 1;

		for (int i = 2; i <= size; i++) {
			p[i] = p[i - 2] + p[i - 1];
		}

		cout << p[size] << endl;

		//delete[] p;
		//p = NULL;
}
