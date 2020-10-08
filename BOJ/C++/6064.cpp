#include <iostream>
using namespace std;

int findD(int m, int n) { //최대공약수를 구하는 함수

	if (m < n) {
		m = n ^ m;
		n = n ^ m;
		m = n ^ m;
	}
	
	if (n == 0) return m;
	else return findD(n, m%n);
}

int main() {
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		
		int m = 0, n = 0, x = 0, y = 0;
		cin >> m >> n >> x >> y;
	
		if (x == m && y == n) {     //만약 마지막년도를 출력할 경우 해당 연도는 m과 n의 최소공배수이다
			cout << (m*n) / findD(m, n) << endl;
			continue;
		}

        //X%X의 결과는 0이므로, x와 m이 같을 경우 나머지를 0으로 만들어준다
		if (x == m) x =0;
		if (y == n) y = 0;

		int num = 0, cnt = 0;

		while (num <= n*m) {
			num = cnt * m + x;
			if (num % n == y) {
				break;
			}
			else cnt++;
		}

		if (num > n*m) cout << -1 << endl;
		else cout << num << endl;
	}
}
