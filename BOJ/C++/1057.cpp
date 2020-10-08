#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	
	int n = 0;	//참가자의 수
	cin >> n;
	int k = 0, i = 0;	//김지민과 임한수의 번호
	cin >> k >> i;
	
	int round = 0;	//김지민과 임한수가 만나는 라운드

	bool b = 0;	//1이면 김지민과 임한수가 대결했다

	while (k != i || k > 0) {
		round++;
		if(k % 2 == 0) k = k / 2;
		else k = k / 2 + 1;
		if (i % 2 == 0) i = i / 2;
		else i = i / 2 + 1;
		
		if (k == i) { 
			b = 1;
			break;
		}
		
	}

	if (b) cout << round << "\n";
	else cout << -1 << "\n";

}
