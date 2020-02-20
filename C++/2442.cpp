#include <iostream>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		
		for (int j = N - i -1; j > 0; j--) {  //맨 앞에 한칸 더 띄지 않도록 주의
			cout << " ";
		}

		for (int j = 0; j <= (2 * i); j++) {
			cout << "*";
		}
		cout << endl;
	}
}
