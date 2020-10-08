#include <iostream>
#include <string>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++)
	{

		int R = 0;
		cin >> R;

		string c;
		cin >> c;

		for (size_t j = 0; j < c.size(); j++) {
			for (size_t K = 0; K < R; K++) {
				cout << c.substr(j, 1);
			}
		}
		cout << "\n";
	}
}


