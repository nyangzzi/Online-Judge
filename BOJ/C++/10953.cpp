#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	char arr[4] = {};	  //char 배열로 string을 입력 받을 때에는 
					            //마지막에 '\n'이 들어갈 것까지 감안해서 배열을 할당한다

	for (int i = 0; i < n; i++) {
		cin >> arr;
		cout << (int)arr[0] + (int)arr[2] - (48 * 2) << endl;
	}
}
