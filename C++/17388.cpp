#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int s = 0, k = 0, h = 0;
	cin >> s >> k >> h;
	
	int sum = s + k + h;

	if (sum >= 100) cout << "OK\n";
	else if(s < k && s< h){
		cout << "Soongsil\n";
	}
	else if (k < s && k < h) {
		cout << "Korea\n";
	}
	else if (h < k && h < s) {
		cout << "Hanyang\n";
	}
}
