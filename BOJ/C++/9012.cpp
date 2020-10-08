#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t = 0;
	cin >> t;   //테스트 케이스 반복

	for (int k = 0; k < t; k++) {

		int n = 0;
		string str;
		cin >> str;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') n++;   //'('는 1이고
			else n--;                 //')'는 -1로 카운트한다

			if (n < 0) {   //')'는 앞서 나온 '('와 짝을 이뤄야 한다
				break;
			}
		}

		if (n == 0) cout << "YES" << endl;
		else cout << "NO" << endl;

	}
}
