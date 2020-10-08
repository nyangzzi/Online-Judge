#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n = 0;	//여름의 일 수
	int t = 0;	//스타후르츠가 자라는데 걸리는 일 수
	int c = 0;	//스타후르츠를 심을 수 있는 칸의 수
	int p = 0;	//스타후르츠 개당 가격

	cin >> n >> t >> c >> p;

	int now = 0;	//현재 스타후르츠의 개수
	n--;
	while (n >= t) {
		n -= t;	//시간이 지나면
		now += c;	//스타후르츠 수확
	}

	cout << now * p << endl;

}
