#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int c = 100, s = 100;	//창영이와 상덕이의 점수

	int round = 0;	//라운드의 수
	cin >> round;

	int x = 0, y = 0;	//창영이와 상덕이가 던진 주사위
	for (int i = 0; i < round; i++) {
		cin >> x >> y;
		if (x < y) c -= y;
		else if (x > y) s -= x;
	}

	cout << c << "\n" << s << "\n";
}
