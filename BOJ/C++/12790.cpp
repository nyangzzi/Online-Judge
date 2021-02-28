#include <iostream>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 0;
	cin >> t;

	while (t--) {
		int hp = 0, mp = 0, attack = 0, defense = 0;
		cin >> hp >> mp >> attack >> defense;

		int a = 0, b = 0, c = 0, d = 0;
		cin >> a >> b >> c >> d;

		hp += a;
		mp += b;
		attack += c;
		defense += d;

		if (hp < 1) hp = 1;
		if (mp < 1) mp = 1;
		if (attack < 0) attack = 0;

		cout << (1 * hp) + (5 * mp) + (2 * attack) + (2 * defense) << endl;
	}

	system("pause");
}
