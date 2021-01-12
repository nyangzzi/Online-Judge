#include<iostream>
using namespace std;

int main(int argc, char** argv) {
	int test_case = 0 ;
	int T = 0;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {

		int n = 0;
		cin >> n;
		int arr[5] = {};
		cout << "#" << test_case << " ";
		while (n != 0) {
			if (n % 2 == 0) { arr[0]++; n /= 2; }
			else if (n % 3 == 0) { arr[1]++; n /= 3; }
			else if (n % 5 == 0) { arr[2]++; n /= 5;}
			else if (n % 7 == 0) { arr[3]++; n /= 7; }
			else if (n % 11 == 0) { arr[4]++; n /= 11; }
			else break;
		}
		for (int i = 0; i < 5; i++) cout << arr[i] << " ";
		cout << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
